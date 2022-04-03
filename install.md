## Install ROS2 (foxy)

```
sudo apt update && sudo apt install curl gnupg2 lsb-release 
```
```
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
``` 
```
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(source /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null 
```
```
sudo apt update
```
```
sudo apt install ros-foxy-desktop
```

## Install Colcon

```
sudo apt install python3-colcon-common-extensions
```

## Envirement Setup

Add these lines in ` ~/.bashrc `
```
source /opt/ros/foxy/setup.bash
```
```
source ~/robo/ros2_ws/install/setup.bash
```
```
source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
```

