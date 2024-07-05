#ifndef __GPIO_C__
#define __GPIO_C__

#include "gpio.h"
#include "error.h"

bool SetPinMode(reg_t *port, uint8_t pin, uint8_t mode)
{
    bool ret_status = NO_ERR;

    if ((port != BASE_B) && (port != BASE_C) && (port != BASE_D))
    {
        ret_status = ERR;
        return ret_status;
    }

    if ((port == BASE_C) && (pin == 7))
    {
        ret_status = ERR;
        return ret_status;
    }

    if ((mode != INPUT) && (mode != OUTPUT))
    {
        ret_status = ERR;
        return ret_status;
    }

    WRITE_BIT((DDR(port)), pin, OUTPUT);
    WRITE_BIT((PORT(port)), pin, LOW);

    return ret_status;
}

bool SetPinState(reg_t *port, uint8_t pin, uint8_t state)
{
    bool ret_status = NO_ERR;

    if ((port != BASE_B) && (port != BASE_C) && (port != BASE_D))
    {
        ret_status = ERR;
        return ret_status;
    }

    if ((port == BASE_C) && (pin == 7))
    {
        ret_status = ERR;
        return ret_status;
    }

    if ((state != HIGH) && (state != LOW))
    {
        ret_status = ERR;
        return ret_status;
    }

    WRITE_BIT(port, pin, state);

    return ret_status;
}

#endif