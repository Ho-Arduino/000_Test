#include <Arduino.h>
#include "gpio.h"

void setup()
{
    // set portb pin 4, 5 as digital out
    SetPinMode(BASE_B, 5, OUTPUT);
    SET_BIT(PORT(BASE_B), 5);
    // set led on

}

void loop()
{
}