## Add ROS2 Custom Interfaces

```
ros2 pkg create ros2_custom_interfaces
```

## Build Package

### Edit package.xml

- Add this after `<buildtool_depend>ament_cmake</buildtool_depend>`
```
<build_depend>rosidl_default_generators</build_depend>
<exec_depend>rosidl_default_runtime</exec_depend>
<member_of_group>rosidl_interface_packages</member_of_group>
```

### Edit CMakeLists.txt

- Remove Default C99 section
- Remove Build Testing section
- Add this after `find dependencies` section
```
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/CustomSrv.srv"
  "msg/CustomMsg.msg"
)
```

### Colcon Build (every time you made any change in code)

```
colcon build --packages-select ros2_custom_interfaces
```

## List of all interfaces

```
ros2 interface list | grep ros2_custom
```

## Show content of any interface

```
ros2 interface show ros2_custom_interfaces/msg/CustomMsg
```