#include <Arduino.h>
#include "register.h"
#include "gpio_reg.h"

void setup()
{
    // set portb pin 4, 5 as digital out
    WRITE_BIT(DDR_B, 4, 1);
    WRITE_BIT(DDR_B, 5, 1);

    // set led on
    WRITE_BIT(PORT_B, 4, 1);
    WRITE_BIT(PORT_B, 5, 1);

}

void loop()
{
}