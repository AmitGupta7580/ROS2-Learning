## Create ROS2 Package (C++)

```
ros2 pkg create ros2_demo_cpp --build-type ament_cmake --dependencies rclcpp std_msgs
```

## Build Package (C++)

### Edit CMakeLists.txt

- Remove Default C99 section
- Remove Build Testing section
- Add this after `find dependencies` section
```
add_executable(talker src/talker.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

add_executable(listener src/listener.cpp)
ament_target_dependencies(listener rclcpp std_msgs)

install(TARGETS
  talker
  listener
  DESTINATION lib/${PROJECT_NAME}/
)
```

### Colcon Build (every time you made any change in code)

```
colcon build --packages-select ros2_demo_cpp
```

## Run ROS2 Node (C++)

```
ros2 run ros2_demo_cpp <NODE_NAME>
```