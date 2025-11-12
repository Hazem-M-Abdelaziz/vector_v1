# 🚗 Vector_V1 — Scaled Vehicle Platform by MRS Lab (GUC)

## 📍 Overview
**Vector_V1** represents the **first prototype of a scaled autonomous vehicle** developed at the **Multi-Robot Systems (MRS) Lab**, German University in Cairo (GUC).  
This platform serves as an experimental testbed for **cooperative autunomous systems**, enabling research on multi-vehicle coordination, control, and perception in real-world environments.

vector_v1 aims to provide an accessible and modular hardware–software framework for scaled vehicle experimentation.  
The version is focused on **enabling manual and remote control** using the **Logitech G920 racing wheel and pedal set**.

---

## 🧠 What is MRS?
The **Multi-Robot Systems (MRS) Lab** is a leading research group at the **German University in Cairo (GUC)**.  
The lab investigates the **design, control, and coordination of cooperative robotic systems**, focusing mainly on investigating the collective behavior of multi-robot and multi-vehicle systems in different application fields, relying on different hardware and simulation environments built and used to proof the theories.

MRS Lab’s mission is to **bridge theoretical research with practical robotic deployment** using reproducible, modular experimental platforms such as *vector_v1*.

---

## 🚙 What is vector_v1?
**vector_v1** is the **first generation of a Scaled Vehicle series**, designed to validate algorithms for:
- Vehicle dynamics and low-level actuation  
- Sensor integration and communication  
- Control via external interfaces 
- Future multi-vehicle interaction studies  

This version provides:
- A simple and effective **hardware and software framework**
- A full setup on **how to operate the vehicle remotely** ?
- ROS 2 subnetwork interoperability for controlling and monitoring  

---

## 📂 Repository Hierarchy

The following is the folder structure of the repo. including files, models, and ROS 2 components needed to start working with the project:

```plaintext
Repository_Root/
├── arduino_rpi_comm/                        # Folder containing .ino script for the arduino            
│   ├── arduino_rpi_comm.ino                     # Arduino script for the nano rp2040 used to setup the communication between arduino and rpi used.
├── local_mc_workspaces/                     # ROS 2 setup for the local machine to enable it communicate with the rpi's ROS 2 ecosystem.
│   ├── ros2_custom_interfaces                   # WS that holds the declaration for the custom message used for the logitech set data.
│   ├── ros2_ws                                  # WS that contains the node that handles the logitech data streaming from the set connected to the local machine to the ecosystem on the rpi remotely.
├── mathworks_controllers/                    # Contains matlab and simulink setup to get familiar with the logitech set (our controller in this case), if you're familiar with its attributes, no need to check it
│   ├── controllerInputModel.slx                 # Simulink model to get familiar with logitech set
│   ├── joystickInput.mlx                        # Matlab live script to get familiar with logitech set
├── rpi_workspaces/                          # ROS 2 setup for the rpi to enable it communicate with the local machine's ROS 2 ecosystem.
│   ├── ros2_custom_interfaces                   # WS that holds the declaration for the custom message used for the logitech set data (same as the one build on the local machine).
│   ├── ros2_ws                                  # WS that contains the node that listens to the logitech data streamed from the local pc and convert it to control commands sent to the arduino connectd on the rpi using serial USB.
└── README.md                                # Project documentation
```

---
## ⚙️ Components of the project

1. rpi mounted on the hardwware (acts as the high level control)
2. arduino borad connected using serial usb to the rpi (acts as the low level control)
3. Servo motor for steering
4. Dc motor for throttling and braking
5. Power needed for controllers and actuators.
6. logitech g920 set to send controlling commands to the rpi, which is then handled by the high level and sent to the low level control


