# Qwiic-Adaptive-Switch

## Software 

Qwiic-Adaptive-Switch-Input and Qwiic-Adaptive-Switch-Output modules both use TCA9534 bus expander to read status of switches. The TCA9534 bus expander converts GPIO to I2C data and you can use the existing I2C TCA9534 libraries to help you get started.

### Qwiic-Adaptive-Switch-Input Software

You can use the <a href="https://github.com/sparkfun/SparkFun_Qwiic_GPIO_Library">TCA9534 library</a> created by SparkFun or another <a href="https://github.com/hideakitai/TCA9534">TCA9534 library</a> created by hideakitai.

There is an example available to help you get started with Qwiic-Adaptive-Switch-Input module and SparkFun TCA9534 library. The <a href="https://raw.githubusercontent.com/milador/Qwiic-Adaptive-Switch/main/Software/Arduino/Qwiic_Adaptive_Switch_Input/Qwiic_Adaptive_Switch_Input.ino">Qwiic_Adaptive_Switch_Input.ino</a> example is available for testing purposes.

