#ifndef __GPIO_C__
#define __GPIO_C__

#include "gpio.h"

void SetPinMode(reg_t *port, uint8_t pin, uint8_t mode)
{
    if ((port != BASE_B) && (port != BASE_C) && (port != BASE_D))
    {
        return;
    }

    if ((port == BASE_C) && (pin == 7))
    {
        return;
    }

    if ((mode != INPUT) && (mode != OUTPUT))
    {
        return;
    }

    WRITE_BIT((DDR(port)), pin, mode);
}

void SetPinState(reg_t *port, uint8_t pin, uint8_t state)
{
    if ((port != BASE_B) && (port != BASE_C) && (port != BASE_D))
    {
        return;
    }

    if ((port == BASE_C) && (pin == 7))
    {
        return;
    }

    if ((state != HIGH) && (state != LOW))
    {
        return;
    }

    WRITE_BIT(port, pin, state);
}

#endif