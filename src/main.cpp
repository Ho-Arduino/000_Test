#include <Arduino.h>
#include "gpio.h"

reg_t * addr = (reg_t *)0x55;

void setup()
{
    Serial.begin(9600);
    SetPinInput(BASE_B, 5);
    SET_BIT(PIN(BASE_B), 5);
    // WRITE_BIT(addr, 4, 1);
}

void loop()
{
    Serial.println(READ_BIT(PIN(BASE_B), 5));
}