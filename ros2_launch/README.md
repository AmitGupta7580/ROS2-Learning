# ROS2 Launch

## Create Package

```
ros2 pkg create ros2_launch
```

## Build Package

### Edit CMakeLists.txt

- Remove Default C99 section
- Remove Build Testing section
- Add this after `find dependencies` section
```
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}/
)
```

### Edit package.xml

- Add this after `<buildtool_depend>ament_cmake</buildtool_depend>` (add external package that you want to execute usign launch file)
```
<exec_depend>ros2_demo_py</exec_depend>
<exec_depend>ros2_demo_cpp</exec_depend>
```

### Colcon Build (every time you made any change in code)

```
colcon build --packages-select ros2_launch
```


## Minimal Code for launch file

```python
from launch import LaunchDescription

def generate_launch_description():
    ld = LaunchDescription()

    return ld
```

## Run Launch File

```
ros2 launch ros2_launch chating.launch.py
```