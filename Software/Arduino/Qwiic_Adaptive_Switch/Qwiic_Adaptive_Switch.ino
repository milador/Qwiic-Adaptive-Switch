/******************************************************************************
  Title: Qwiic Adaptive Switch Example
  File: Qwiic_Adaptive_Switch.ino
  Created: July 10, 2021
  https://github.com/milador/Qwiic-Adaptive-Switch

  This is an example that allows the user to read the status of all 2 switches simultaneously

******************************************************************************/

#include <Wire.h>
#include "SparkFun_TCA9534.h"

TCA9534 myGPIO;

#define NUM_GPIO 4

bool currentPinMode[NUM_GPIO] = {GPIO_IN, GPIO_IN, GPIO_IN, GPIO_IN};

bool gpioStatus[NUM_GPIO];

void setup() {
  Serial.begin(115200);
  Serial.println("Qwiic Adaptive Switch Example");
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
    gpioStatus[arrayPosition] = myGPIO.digitalRead(arrayPosition);
    switch (gpioStatus[arrayPosition])
    {
      case true:
        Serial.print("HIGH");
        break;
      case false:
        Serial.print("LOW");
        break;
    }
    if(arrayPosition<NUM_GPIO-1){
      Serial.print(",");
    }
  }
  Serial.println("\n");
  delay(100);
}
