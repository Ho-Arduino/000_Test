#ifndef __GPIO_REG_DEF_H__
#define __GPIO_REG_DEF_H__

#include <common.h>
#include "registers.h"

// Base Address' of I/O Registers
#define BASE_PIN                   ((reg_t *) 0x23u)  // PIN Base Address
#define BASE_DDR                   ((reg_t *) 0x24u)  // DDR Base Address
#define BASE_PORT                  ((reg_t *) 0x25u)  // PORT Base Address

// Get Address of a Pin's I/O Register
#define PIN(P)                   (BASE_PIN  + ((P) * 3))  // PIN Register
#define DDR(P)                   (BASE_DDR  + ((P) * 3))  // DDR Register
#define PORT(P)                  (BASE_PORT + ((P) * 3))  // PORT Register

// Get Index of a Pin's Port/Pin Index
#define GET_PORT(P)              ((P) / 10u)
#define GET_PIN(P)               ((P) % 10u)

// Port B's Pin Indices
#define PB0         0u
#define PB1         1u
#define PB2         2u
#define PB3         3u
#define PB4         4u
#define PB5         5u
#define PB6         6u
#define PB7         7u

// Port C's Pin Indices
#define PC0         10u
#define PC1         11u
#define PC2         12u
#define PC3         13u
#define PC4         14u
#define PC5         15u
#define PC6         16u
#define PC7         17u

// Port D's Pin Indices
#define PD0         20u
#define PD1         21u
#define PD2         22u
#define PD3         23u
#define PD4         24u
#define PD5         25u
#define PD6         26u

#endif