## Create ROS2 Service (python)

```
ros2 pkg create ros2_demo_py --build-type ament_python --dependencies rclpy std_msgs
```

## Build Package (Python)

- Add `<depend>ros2_custom_interfaces</depend>` in `package.xml` file.
- Specify Entry Point in `setup.py` file in `console_scripts`: `"server = ros2_service_py.server:main"`.
- Move to workspace and build the package
```
colcon build --packages-select ros2_service_py --symlink-install
```
```
source ~/.bashrc
```

## Run ROS2 Service (Python)

```
ros2 run ros2_service_py server
```

## List all the services

```
ros2 service list
```

## Call service using terminal

```
ros2 service call /change_number ros2_custom_interfaces/srv/CustomSrv `{number: 2}`
```