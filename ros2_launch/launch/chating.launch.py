from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    talker_node = Node(
        # package="ros2_demo_py",
        package="ros2_demo_cpp",
        executable="talker",
        name="custom_talker", # set dustom name to node
        remappings=[], # rename any topic name
        parameters=[], # set parameters value
    )

    listener_node = Node(
        # package="ros2_demo_py",
        package="ros2_demo_cpp",
        executable="listener",
    )

    ld.add_action(talker_node)
    ld.add_action(listener_node)

    return ld