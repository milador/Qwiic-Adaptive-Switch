# Qwiic-Adaptive-Switch

## Software 

Qwiic-Adaptive-Switch-Input and Qwiic-Adaptive-Switch-Output modules both use TCA9534 bus expander to read or write status of switches. The TCA9534 bus expander converts GPIO to I2C data and you can use the existing I2C TCA9534 libraries to help you get started.

## Library 

### Arduino Library
You have two options if you are planning to use C++ and Arduino to write your code.

  1. [SparkFun_Qwiic_GPIO_Library](https://github.com/sparkfun/SparkFun_Qwiic_GPIO_Library) ( TCA9534 library created by SparkFun to be used with Qwiic Bus-Expander module )
  2. [TCA9534 library](https://github.com/hideakitai/TCA9534) ( TCA9534 library created by hideakitai )

### CircuitPython Library
You have the option to use the <a href="https://github.com/milador/Community_CircuitPython_TCA9534">Community_CircuitPython_TCA9534</a> library if you are planning to write your code in CircuitPython. 

## Example Code 

### Qwiic-Adaptive-Switch-Input Example Code

There is an example available to help you get started with Qwiic-Adaptive-Switch-Input module and SparkFun TCA9534 library. The <a href="https://raw.githubusercontent.com/milador/Qwiic-Adaptive-Switch/main/Software/Arduino/Qwiic_Adaptive_Switch_Input/Qwiic_Adaptive_Switch_Input.ino">Qwiic_Adaptive_Switch_Input.ino</a> example is available for testing purposes.

### Qwiic-Adaptive-Switch-Output Example Code

There is an example available to help you get started with Qwiic-Adaptive-Switch-Output module and SparkFun TCA9534 library. The <a href="https://raw.githubusercontent.com/milador/Qwiic-Adaptive-Switch/main/Software/Arduino/Qwiic_Adaptive_Switch_Output/Qwiic_Adaptive_Switch_Output.ino">Qwiic_Adaptive_Switch_Output.ino</a> example is available for testing purposes.


