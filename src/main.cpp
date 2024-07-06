#include <Arduino.h>
#include "gpio.h"

void setup()
{
    Serial.begin(9600);
    SetPinInput(BASE_D, 2);
}

void loop()
{
    Serial.println(READ_BIT(PIN(BASE_D), 2));
}