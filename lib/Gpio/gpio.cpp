#ifndef _GPIO_CPP_
#define _GPIO_CPP_

#include "gpio.h"
#include "common.h"
#include "registers.h"


// Constructors
gpio::gpio(uint8_t pin)
{
    set_pin(pin);
}

gpio::gpio(uint8_t pin, uint8_t mode)
{
    set_pin(pin);
    set_mode(mode);
}

gpio::gpio(uint8_t pin, uint8_t mode, uint8_t output)
{
    set_pin(pin);
    set_mode(mode);
    set_output(output);
}

gpio::gpio(const gpio &other)
{
    set_pin(other.m_pin);
}

// Member Functions
void gpio::set_pin(uint8_t pin)
{
    this->m_pin = pin;
}

uint8_t gpio::get_pin(void)
{
    return this->m_pin;
}

void gpio::set_mode(uint8_t mode)
{
    uint8_t idx_port = GET_PORT(this->m_pin);
    uint8_t idx_pin  = GET_PIN(this->m_pin); 

    WRITE_BIT(DDR(idx_port), idx_pin, mode);
}

uint8_t gpio::get_mode(void)
{
    uint8_t idx_port = GET_PORT(this->m_pin);
    uint8_t idx_pin  = GET_PIN(this->m_pin); 

    return READ_BIT(DDR(idx_port), idx_pin);
}

void gpio::set_output(uint8_t output)
{
    uint8_t idx_port = GET_PORT(this->m_pin);
    uint8_t idx_pin  = GET_PIN(this->m_pin); 

    WRITE_BIT(PORT(idx_port), idx_pin, output);
}

uint8_t gpio::get_output(void)
{
    uint8_t idx_port = GET_PORT(this->m_pin);
    uint8_t idx_pin  = GET_PIN(this->m_pin); 

    return READ_BIT(PORT(idx_port), idx_pin);
}

uint8_t gpio::get_input(void)
{
    uint8_t idx_port = GET_PORT(this->m_pin);
    uint8_t idx_pin  = GET_PIN(this->m_pin); 

    // return (((*(reg_t *) 0x29) & (1 << idx_pin)) != 0);
    return READ_BIT(PIN(idx_port), idx_pin);
}

void gpio::toggle(void)
{
    uint8_t idx_port = GET_PORT(this->m_pin);
    uint8_t idx_pin  = GET_PIN(this->m_pin); 

    WRITE_BIT(PIN(idx_port), idx_pin, 1u);
}
#endif