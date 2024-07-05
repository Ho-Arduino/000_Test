#ifndef __GPIO_C__
#define __GPIO_C__

#include <inttypes.h>
#include "error.h"
#include <stdbool.h>

#include "gpio_reg.h"

bool SetPinMode(reg_t *port, uint8_t pin)
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

    // WRITE_BIT(port + )
}
#endif