## Create ROS2 Service (C++)

```
ros2 pkg create ros2_service_cpp --build-type ament_cmake --dependencies rclcpp std_msgs
```

## Build Package (C++)

### Edit CMakeLists.txt

- Remove Default C99 section
- Remove Build Testing section
- Add this after `find dependencies` section
```
find_package(ros2_custom_interfaces REQUIRED)

add_executable(server src/server.cpp)
ament_target_dependencies(server rclcpp std_msgs ros2_custom_interfaces)

install(TARGETS
  server
  DESTINATION lib/${PROJECT_NAME}/
)
```

### Colcon Build (every time you made any change in code)

```
colcon build --packages-select ros2_service_cpp
```


## Run ROS2 Service (Python)

```
ros2 run ros2_service_cpp server
```

## List all the services

```
ros2 service list
```

## Call service using terminal

```
ros2 service call /change_number ros2_custom_interfaces/srv/CustomSrv `{number: 2}`
```