# ROS2 Learning

Practice code of ROS2 (foxy)

Tip: First go through README file before reading code


## Packages

- Talker/Listener in Python : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_demo_py">ros2_demo_py</a><br>
- Talker/Listener in C++ : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_demo_cpp">ros2_demo_cpp</a><br> 
- Custom Interface : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_custom_interfaces">ros2_custom_interfaces</a><br> 
- Service in Python : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_service_py">ros2_service_py</a><br> 
- Service in C++ : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_service_cpp">ros2_service_cpp</a><br> 
- ROS2 Parameters : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_parameters">ros2_parameters</a><br>
- ROS2 Launch : <a href="https://github.com/AmitGupta7580/ROS2-Learning/tree/master/ros2_launch">ros2_launch</a><br>

## Important Tips

### Rename any node

```
ros2 run <PKG_NAME> <NODE_NAME> --ros-args -r __node:=<NEW_NAME>
```

### Rename any topic/service

```
ros2 run <PKG_NAME> <NODE_NAME> --ros-args -r <TOPIC_NAME/SERVICE_NAME>:=<NEW_NAME>
```