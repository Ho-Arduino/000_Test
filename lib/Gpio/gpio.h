#ifndef __GPIO_H__
#define __GPIO_H__

#include <inttypes.h>
#include <stdbool.h>

#include "gpio_reg.h"

#ifndef INPUT
#define INPUT       (0x00UL)
#endif

#ifndef OUTPUT
#define OUTPUT      (0x01UL)
#endif

#ifndef LOW
#define LOW         (0x00UL)
#endif

#ifndef HIGH
#define HIGH        (0x01UL)
#endif

/**
 * @brief Set the Pin's GPIO Mode
 * 
 * This fucntion takes the base address of a port and pin index, then set the
 * pin's gpio mode as input or output.
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 * @param mode  The mode of gpio (input/output)
 */
extern void SetPinMode(reg_t *port, uint8_t pin, uint8_t mode);

/**
 * @brief Set the Pin as GPIO Output
 * 
 * This function takes the address of a port and pin, then set the pin as
 * digital output pin.
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 */
static inline void SetPinOutput(reg_t *port, uint8_t pin)
{
    SetPinMode(port, pin, OUTPUT);
}

static inline void SetPinInput(reg_t *port, uint8_t pin)
{
    SetPinMode(port, pin, INPUT);
}

void SetPinState(reg_t *port, uint8_t pin, uint8_t state);

static inline void SetPinHigh(reg_t *port, uint8_t pin)
{
    SetPinState(port, pin, HIGH);
}

static inline void SetPinLow(reg_t *port, uint8_t pin)
{
    SetPinState(port, pin, LOW);
}

static inline uint8_t GetPinState(reg_t *port, uint8_t pin)
{

}

#endif