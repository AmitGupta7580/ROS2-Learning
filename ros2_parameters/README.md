# Parameters in ROS2

## List all Parameters

```
ros2 param list
```

## Get the value of Parameter on Terminal

```
ros2 param get <NODE_NAME> <PARAMETER_NAME>
```

## Publish parameter value from Terminal

```
ros2 run <PACKAGE_NAME> <NODE_NAME> --ros-args -p <PARAMETER_NAME>:=<VALUE>
```

## Declare Parameter in Python

```
self.declare_parameter("<PARAMETER_NAME>")
```

## Use Parameter in Python

```
val = self.get_parameter("<PARAMETER_NAME>").value
```

- Note : Error accurs if you try to extract parameter without setting its value ot declaring it.
- To avoid such error give default value to parameter
```
self.declare_parameter("<PARAMETER_NAME>", <DEFAULT_VALUE>)
```

## Declare Parameter in C++

```
this->declare_parameter("<PARAMETER_NAME>")
```

## Use Parameter in C++

```
val = this->get_parameter("<PARAMETER_NAME>").as_int()
val = this->get_parameter("<PARAMETER_NAME>").as_double()
```

- Note : Error accurs if you try to extract parameter without setting its value.
- To avoid such error give default value to parameter
```
this->declare_parameter("<PARAMETER_NAME>", <DEFAULT_VALUE>)
```
