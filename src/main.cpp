#include <Arduino.h>
#include "gpio.h"

void setup()
{
    // set portb pin 4, 5 as digital out
    SetPinOuput(BASE_B, 5);
    SetPinState(BASE_B, 5, HIGH);
    // set led on

}

void loop()
{
}