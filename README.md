[![License](https://img.shields.io/github/license/Hazem-M-Abdelaziz/vector_v1.svg)](LICENSE)
![Language](https://img.shields.io/badge/languages-MATLAB%20%7C%20Python%20%7C%20CPP-orange.svg)
[![Last Commit](https://img.shields.io/github/last-commit/Hazem-M-Abdelaziz/vector_v1.svg)](https://github.com/Hazem-M-Abdelaziz/vector_v1/commits/main)
[![GitHub Repo stars](https://img.shields.io/github/stars/Hazem-M-Abdelaziz/vector_v1?style=social)](https://github.com/Hazem-M-Abdelaziz/vector_v1)


# 🚗 Vector_V1 — Scaled Vehicle Platform by MRS Lab (GUC)

## 📍 Overview
**Vector_V1** represents the **first prototype of a scaled autonomous vehicle** developed at the **Multi-Robot Systems (MRS) Lab**, German University in Cairo (GUC).  
This platform serves as an experimental testbed for **cooperative autunomous systems**, enabling research on multi-vehicle coordination, control, and perception in real-world environments.

vector_v1 aims to provide an accessible and modular hardware–software framework for scaled vehicle experimentation.  
The version is focused on **enabling manual and remote control** using the **Logitech G920 racing wheel and pedal set**.

---

## 🧠 MRS
<img src="https://github.com/user-attachments/assets/d3f8aaea-3232-4fbd-b368-414dbba1c5ef" align="right" width="300"/>

The **Multi-Robot Systems (MRS) Lab** is a leading research group at the **German University in Cairo (GUC)**.  
The lab investigates the **design, control, and coordination of cooperative robotic systems**, focusing mainly on investigating the collective behavior of multi-robot and multi-vehicle systems in different application fields, relying on different hardware and simulation environments built and used to proof the theories.

MRS Lab’s mission is to **bridge theoretical research with practical robotic deployment** using reproducible, modular experimental platforms such as *vector_v1*.


---

## 🚙 What is vector_v1?
<img src="https://github.com/user-attachments/assets/c69d41bc-51ff-4950-8035-b2d151fe73cb" align="right" width="300"/>

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
All scripts and models are documented with comments.

---

## 🧰 MathWorks tools
Attached in `mathworks_controllers/` directory you can see two files used to get familiar with the controller set and visualize how many attributes, what are the types?, and mapping the action to the attributes itself easily.
1. controllerInputModel.slx (Simulink model used to identify controller, assign data to ROS 2 custom message, and publish to a certain topic)
<img width="1783" height="840" alt="Image" src="https://github.com/user-attachments/assets/89510d59-0c7d-49d4-be1b-fd8bfe4f084d" />

2. joystickInput.mlx (Matlab Live script used to identify controller, assign data to ROS 2 custom message, and publish to a certain topic)
<img width="1180" height="797" alt="Image" src="https://github.com/user-attachments/assets/6ce1db25-1961-45c8-80e5-38b9a575227d" />

⚠️ If you're already familiar with the controller attributes, types, and input mapping. You don't need to check these files, although you can use them to publish your controller data (As a replacement of logitech input publisher node scripted, built, and resourced to your local machine WS)



## ⚙️ Components of the project

1. rpi mounted on the hardwware (acts as the high level control)
2. arduino borad connected using serial usb to the rpi (acts as the low level control)
3. Servo motor for steering
4. Dc motor for throttling and braking
5. Power needed for controllers and actuators.
6. logitech g920 set to send controlling commands to the rpi, which is then handled by the high level and sent to the low level control

---

## 🔤 Full guide to setup and use the project

1. First of all you need to establish the ROS 2 subnetwork for the project, this version uses local pc as a master connected to the logitech set and sends controlling command for the vehicle which has a rpi mounted as the slave.
   So both of them needs to be connected to the same local network to be visible to each others.
- OS used :
  ```
  Distributor ID:	Ubuntu
  Description:	Ubuntu 24.04.3 LTS
  Release:	24.04
  Codename:	noble
  ```
- ROS Distro used :
  ```
  ROS_VERSION=2
  ROS_PYTHON_VERSION=3
  ROS_AUTOMATIC_DISCOVERY_RANGE=SUBNET
  ROS_DISTRO=jazzy
  ```

2. setup and build both system properly to be able to communicate correctly.
  
   Your network should look like this:
   <img width="1114" height="635" alt="Image" src="https://github.com/user-attachments/assets/1fb5bcec-7487-4af8-8789-194a2e20e664" />
   - For the local pc:
       have the `local_mc_workspaces` setup and sourced to identify custom message for the controller and the logitech_streamer node.
   - For the rpi:
       have the `rpi_workspaces` setup and sourced to also identify custom message for the controller and the arduino controller node.

5. Upload the arduino script to prepare it for recieving commands from the rpi using serial USB.

6. Connect your rpi to the local pc using ssh on your local machine terminal:
    ``` bash
    ssh <user_name>@<target_ip_address>
    ```
    ⚠️ Make sure ssh is enabled on target before connecting.

7. Setting up ROS_DOMAIN_ID on both devices to seperate their ROS 2 as a subnetwork:
   ``` bash
   export ROS_DOMAIN_ID=<val>
   ```
   this value could be any integer like: `export ROS_DOMAIN_ID=23`
   you can make sure the ROS_DOMAIN_ID is set properly on both devices by doing:
   ``` bash
   echo $ROS_DOMAIN_ID
   ```

8. Run your ROS 2 node on local machine after plugging-in the logitech controller:
   ``` bash
   ros2 run logitech_streamer logitech_input_publisher
   ```

9. Run your ROS 2 node on rpi:
    ```bash
    ros2 run rpi_controller arduino_controller
    ```
    
---
After doing so, your interface should look something like this:
![Image](https://github.com/user-attachments/assets/fa504afa-ca80-4a86-a9a3-0be70e3fb95b)

🚀 Let’s get started: your scaled vehicle platform is ready for experimentation!
<p align="center">
  <img src="https://github.com/user-attachments/assets/ef658e9f-489a-4644-aba1-8ce0a6671331" width="100%">
</p>

---

## 🙏 Acknowledgments

Special thanks to:

- **Prof. Omar M. Shehata** — Associate Professor in the Mechatronics Engineering Department and Director of the Multi-Robot Systems (MRS) Lab, for providing the opportunity and guidance to be part of this project.

- **Eng. Mohammed Sokkar** — for his valuable contributions in designing the **Vector_V1** scaled vehicle.
- and the whole **MRS Research Group** for the great experience.

---


## 📧 Contacts 

- **Hazem Mohsen**:
  - [![LinkedIn](https://img.shields.io/badge/LinkedIn-informational?style=flat&logo=linkedin&logoColor=white&color=0077B5)](https://www.linkedin.com/in/hazem-m-abdelaziz)
  - [![Gmail](https://img.shields.io/badge/Gmail-D14836?style=flat&logo=gmail&logoColor=white)](mailto:hazemmohsen07@gmail.com)
