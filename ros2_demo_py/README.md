## Create ROS2 Package (python)

```
ros2 pkg create ros2_demo_py --build-type ament_python --dependencies rclpy
```

## Build Package (Python)

- Specify Entry Point in `setup.py` file in `console_scripts`: `"talker = ros2_demo_py.talker:main"` 
- Move to workspace and build the package
```
colcon build --packages-select ros2_demo_py --symlink-install
```
```
source ~/.bashrc
```

## Run ROS2 Node (Python)

```
ros2 run ros2_demo_py <NODE_NAME>
```