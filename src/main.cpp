#include <Arduino.h>
#include "register.h"

volatile uint8_t *ddrb = (volatile uint8_t *)0x23;
volatile uint8_t *portb = (volatile uint8_t *)0x24;

void setup()
{
    // set portb pin 4, 5 as digital out
    WRITE_BIT(ddrb, 4, 1);
    WRITE_BIT(ddrb, 5, 1);

    // set led on
    WRITE_BIT(portb, 4, 1);
    WRITE_BIT(portb, 5, 1);

}

void loop()
{
}