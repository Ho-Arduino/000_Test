/**
 * @file gpio.h
 * @author Ho (khj199859@gmail.com)
 * @brief This file contains features to use Atmega328p's gpio features
 * @version 0.1
 * @date 2024-07-08
 * 
 * @todo
 *      1. Add feature to set input pull-up pin
 *      2. Fix TogglePin() -> doesn't work
 */

#ifndef __GPIO_H__
#define __GPIO_H__

#include <inttypes.h>

#include "gpio_reg.h"

/**
 * @brief GPIO modes
 */
#ifndef INPUT
#define INPUT       (0x00UL)
#endif

#ifndef OUTPUT
#define OUTPUT      (0x01UL)
#endif

/**
 * @brief Digital States
 */
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
 * @brief Set the Pin as Digital Output
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

/**
 * @brief Set the Pin as Digital Input
 * 
 * This function takes the address of a port and pin, then set the pin as
 * digital input pin.
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 */
static inline void SetPinInput(reg_t *port, uint8_t pin)
{
    SetPinMode(port, pin, INPUT);
}

/**
 * @brief Output the given digital state to the given pin
 * 
 * Set a bit at the given index of PORT registar
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 * @param state Digital output state
 */
void SetPinState(reg_t *port, uint8_t pin, uint8_t state);

/**
 * @brief Output High at the given pin
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 */
static inline void SetPinHigh(reg_t *port, uint8_t pin)
{
    SetPinState(port, pin, HIGH);
}

/**
 * @brief Output High at the given pin
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 */
static inline void SetPinLow(reg_t *port, uint8_t pin)
{
    SetPinState(port, pin, LOW);
}

/**
 * @brief Read Digital Input State of the Given Pin
 * 
 * @param port  The base address of a gpio port
 * @param pin   The index of a gpio pin
 * @return      The state of the digital input pin
 */
static inline uint8_t GetPinState(reg_t *port, uint8_t pin)
{
    return READ_BIT(port, pin);
}

static inline void TogglePin(reg_t *port, uint8_t pin)
{
    WRITE_BIT(PORT(port), pin, !READ_BIT(PORT(port), pin));
}

#endif