#include <Arduino.h>
#include "gpio.h"

void setup()
{
    Serial.begin(9600);
    Serial.println(READ_BIT(DDR(BASE_B), 5));
    Serial.println(READ_BIT(PORT(BASE_B), 5));
    SetPinOuput(BASE_B, 5);
    SetPinHigh(BASE_B, 5);
    Serial.println(READ_BIT(DDR(BASE_B), 5));
    Serial.println(READ_BIT(PORT(BASE_B), 5));
}

void loop()
{
}