#include <Arduino.h>
#include "gpio.h"

void setup()
{
    SetPinOutput(BASE_B, 5);
    SetPinHigh(BASE_B, 5);
}

void loop()
{
}