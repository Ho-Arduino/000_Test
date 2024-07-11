#include <Arduino.h>
#include "gpio.h"

void setup()
{
    SetPinOutput(BASE_B, 5);
}

void loop()
{
    delay(1000);
    TogglePin(BASE_B, 5);
}