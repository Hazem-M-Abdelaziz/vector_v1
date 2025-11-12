#!/usr/bin/env python3
#Importing modules and packages needed.
import rclpy
from rclpy.node import Node
from custom_msgs.msg import LogitechInput
import pygame

#Identifying class for the publisher to publish controller data to the ROS 2 network
class LogitechInputPublisher(Node):
    def __init__(self):
        super().__init__('logitech_input_publisher')

        #Initialize pygame for joystick handling
        pygame.init()
        pygame.joystick.init()

        joystick_count = pygame.joystick.get_count()
        if joystick_count == 0:
            self.get_logger().error("No joystick detected!")
            raise SystemExit

        self.joystick = pygame.joystick.Joystick(0)
        self.joystick.init()

        self.get_logger().info(f"🎮 Joystick detected: {self.joystick.get_name()}")

        #Creating publisher
        self.publisher_ = self.create_publisher(LogitechInput, 'logitech_input_topic', 10)

        #Timer for publishing at ~50 Hz
        self.timer = self.create_timer(0.02, self.timer_callback)

    def timer_callback(self):
        #Pump pygame events to keep input data updated repeatedly
        pygame.event.pump()
        msg = LogitechInput()

        #Assigning Axes data
        num_axes = min(self.joystick.get_numaxes(), 6)
        axes_data = [float(self.joystick.get_axis(i)) for i in range(num_axes)]

        #Pad with zeros if joystick has fewer than 6 axes (Checking condition)
        while len(axes_data) < 6:
            axes_data.append(0.0)

        msg.axes = axes_data

        #Assigning buttons data
        num_buttons = min(self.joystick.get_numbuttons(), 18)
        button_data = [bool(self.joystick.get_button(i)) for i in range(num_buttons)]

        #Pad with False if joystick has fewer than 18 buttons (Checking condition)
        while len(button_data) < 18:
            button_data.append(False)

        msg.buttons = button_data

        #Publish data
        self.publisher_.publish(msg)
        self.get_logger().debug(f"Published Logitech input: {msg}")

    def destroy_node(self):
        # Clean up pygame resources
        self.get_logger().info("Shutting down Logitech input publisher...")
        pygame.quit()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = LogitechInputPublisher()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
