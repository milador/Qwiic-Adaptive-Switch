/******************************************************************************
  Title: Qwiic Adaptive Switch Output Example
  File: Qwiic_Adaptive_Switch_Output.ino
  Created: October 30, 2021
  https://github.com/milador/Qwiic-Adaptive-Switch

  This is an example that allows the user to output the status of all 2 switches simultaneously

******************************************************************************/

#include <Wire.h>
#include "SparkFun_TCA9534.h"

TCA9534 myGPIO;

#define NUM_GPIO 4

bool currentPinMode[NUM_GPIO] = {GPIO_OUT, GPIO_OUT, GPIO_OUT, GPIO_OUT};

bool gpioStatus[NUM_GPIO];

void setup() {
  Serial.begin(115200);
  Serial.println("Qwiic Adaptive Switch Output Example");
  Wire.begin();
  if (myGPIO.begin() == false) {
    Serial.println("Check Connections. No Qwiic GPIO detected.");
    while (1);
  }

  myGPIO.pinMode(currentPinMode);
}

void loop() {

  Serial.print("Switch array: ");
  for (uint8_t arrayPosition = 0; arrayPosition < NUM_GPIO; arrayPosition++) {
    myGPIO.digitalWrite(arrayPosition, HIGH);
    Serial.print("GPIO");
    Serial.print(arrayPosition);
    Serial.print(":");
    Serial.println("HIGH");
    delay(1000);
    myGPIO.digitalWrite(arrayPosition, LOW);
    Serial.print("GPIO");
    Serial.print(arrayPosition);
    Serial.print(":");
    Serial.println("LOW");          
    delay(1000);
  }
  delay(100);
}
