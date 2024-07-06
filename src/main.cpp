#include <Arduino.h>
#include "gpio.h"

void setup()
{
    // set portb pin 4, 5 as digital out
    SetPinOuput(BASE_B, 5);
    SetPinLow(BASE_B, 5);
    // set led on

}

void loop()
{
}