#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import serial
import time

from custom_msgs.msg import LogitechInput  # Make sure this message is built and sourced


class ArduinoController(Node):
    def __init__(self):
        super().__init__('arduino_controller')

        # --- Serial setup ---
        self.ser = serial.Serial('/dev/ttyACM0', 115200, timeout=1)
        time.sleep(2)  # Give Arduino time to reset

        # --- Initial servo + DC setup ---
        self.ser.write(b'SERVO:95\n')
        self.ser.write(b'DC:STOP:0\n')
        self.get_logger().info("Arduino initialized. Waiting for joystick input...")

        # --- ROS Subscriber ---
        self.subscription = self.create_subscription(
            LogitechInput,
            '/logitech_input_topic',
            self.joystick_callback,
            10
        )
        self.get_logger().info("Subscriber Created...")

        # --- State variables ---
        self.last_speed = 0
        self.last_servo = 95

    def joystick_callback(self, msg: LogitechInput):
        """
        Handle joystick inputs.
        axes[1] → throttle (1 to -1)
        axes[3] → brake (1 to -1)
        axes[0] → steering (if needed)
        """
        axes = msg.axes
        buttons = msg.buttons

        # Safety check for expected length
        if len(axes) < 5:
            self.get_logger().warn("Received incomplete axes data.")
            return
        else:
            self.get_logger().info("Processing data...")

        throttle = axes[1]  # forward
        brake = axes[3]     # backward
        immediate_brake = 0
        if axes[2] < 0.4:
            immediate_brake = 1
            self.last_speed = 0
        else:
            immediate_brake = 0

        #Map throttle/brake from -1~1 to speed range (0~255 for PWM)
        if buttons[16] or buttons[17]:
            throttle_speed = int(((1.0 - throttle) / 2.0) * 255)  # 1→0, -1→255
            brake_speed = int(((1.0 - brake) / 2.0) * 255)        # 1→0, -1→255
        else:
            throttle_speed = self.last_speed
            brake_speed = 0.0

        # Determine DC motor command
        if self.last_speed < throttle_speed:
            self.last_speed = throttle_speed if throttle_speed > 20 else 0

        speed_signal = self.last_speed - brake_speed

        if speed_signal < 0:
            speed_signal = 0
        elif speed_signal > 255:
            speed_signal = 255

        self.last_speed = speed_signal

        if buttons[16] and not immediate_brake:
            cmd = f"DC:FORWARD:{speed_signal}\n".encode()
        elif buttons[17] and not immediate_brake:
            cmd = f"DC:BACKWARD:{speed_signal}\n".encode()
        else:
            cmd = b"DC:STOP:0\n"

        self.ser.write(cmd)

        # Steering control (limit steering range to ±0.2)
        steering_in = axes[0]
        if steering_in >= 0.2:
            steering_in = 0.2
        elif steering_in <= -0.2:
            steering_in = -0.2

        steering_val = int(95 + steering_in * 5 * 25.0)  # 95 is center, ±25 offset
        self.ser.write(f"SERVO:{steering_val}\n".encode())

        self.get_logger().info(
            f"Speed_Signal={speed_signal:.2f}, "
            f"Steering_Angle={steering_val:.2f}, "
            f"Sent: {cmd.decode().strip()}"
        )

    def destroy_node(self):
        """Graceful shutdown"""
        self.ser.write(b'DC:STOP:0\n')
        self.ser.write(b'SERVO:95\n')
        self.ser.close()
        self.get_logger().info("Serial closed. Node stopped.")
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = ArduinoController()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()








