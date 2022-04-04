cmake_minimum_required(VERSION 3.5)
project(ros2_service_cpp)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(ros2_custom_interfaces REQUIRED)

add_executable(server src/server.cpp)
ament_target_dependencies(server rclcpp std_msgs ros2_custom_interfaces)

install(TARGETS
  server
  DESTINATION lib/${PROJECT_NAME}/
)

ament_package()
