#ifndef __GPIO_H__
#define __GPIO_H__

#include <inttypes.h>
#include <stdbool.h>
#include "error.h"

#include "gpio_reg.h"

#define INPUT       (0x00UL)
#define OUTPUT      (0x01UL)

/**
 * @brief Set the Pin Mode object
 * 
 * @param port      gpio port
 * @param pin       gpio pin
 * @return true     error
 * @return false    no error
 */
static inline bool SetPinMode(reg_t *port, uint8_t pin);

#endif