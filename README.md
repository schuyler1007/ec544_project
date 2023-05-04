# ec544_project

## Summary of the Project
 The goal of this project is to create mesh IoT network to communicate a security alert to all nodes on a decentralized network. A human unlocking a door with a door sensor attached to it will be considered a “security breach”, and an alert signal will be sent to every node (each one consisting of an ESP32 device) on the mesh network. Once the alert is received, a buzzer will go off and the on-board ESP32 LED will light up to alert humans of the security breach. 
This project would be connected to Boston University’s EC 544 course by relying on concepts such as Decentralized Computing, Computer Networks, and Authorization. We do not have any prior artwork related to this project. 

## Design
- Open WRT
- Mesh Network
- Door Sensor (contact switch)

## How to Install
```
git clone https://github.com/schuyler1007/ec544_project.git
cd ec544_project/src
```
### For ESP32 that is connected to the door
```
cd mesh
idf.py flash monitor -p "PORT TO ESP32"
```

### For ESP32 that is connected to buzzer
```
cd mesh_only
idf.py flash monitor -p "PORT TO ESP32"
```
## Demo
[![Watch the video](https://img.youtube.com/vi/VndmO2cFF9c/maxresdefault.jpg)](https://youtu.be/VndmO2cFF9c)