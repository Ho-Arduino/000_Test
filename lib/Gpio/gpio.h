#ifndef __GPIO_CFG_H__
#define __GPIO_CFG_H__

#include "common.h"
#include "registers.h"
#include "gpio_reg.h"

class gpio
{
private:
    uint8_t m_pin   = -1;


public:
    // Constructors
    gpio(void) {}
    gpio(uint8_t pin);
    gpio(uint8_t pin, uint8_t mode);
    gpio(uint8_t pin, uint8_t mode, uint8_t output);
    gpio(const gpio &other);

    // Destructor
    ~gpio(void) {}

    // Member Functions
    void set_output(uint8_t state);
    void set_pin(uint8_t port);
    void set_mode(uint8_t mode);

    uint8_t get_pin(void);
    uint8_t get_mode(void);
    uint8_t get_output(void);
    uint8_t get_input(void);
    void toggle(void);
};

#endif