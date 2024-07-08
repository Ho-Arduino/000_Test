#include <Arduino.h>
#include "gpio.h"

volatile uint8_t *port = BASE_B;
const uint8_t pin = 5;

void setup()
{
    SetPinInput(BASE_D, 2);
    SetPinOutput(BASE_B, 5);
}

void loop()
{
    uint8_t input = GetPinState(BASE_D, 2);
    SetPinState(BASE_B, 5, input);
}