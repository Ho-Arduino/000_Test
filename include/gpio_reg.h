#ifndef __GPIO_REG_H__
#define __GPIO_REG_H__

#include <inttypes.h>
#include "register.h"

#define BASE_GPIO           ((reg_t *) 0x23UL)

#define SIZE_GPIO_REG       (0x03UL)

#define IDX_B               (0x00UL)
#define IDX_C               (0x01UL)
#define IDX_D               (0x02UL)

#define IDX_PIN             (0x00UL)
#define IDX_DDR             (0x01UL)
#define IDX_PORT            (0x02UL)

#define BASE_B              ((BASE_GPIO) + ((SIZE_GPIO_REG) * (IDX_B)))
#define BASE_C              ((BASE_GPIO) + ((SIZE_GPIO_REG) * (IDX_C)))
#define BASE_D              ((BASE_GPIO) + ((SIZE_GPIO_REG) * (IDX_D)))

#define PIN_B               ((BASE_B) + (IDX_PIN))
#define DDR_B               ((BASE_B) + (IDX_DDR))
#define PORT_B              ((BASE_B) + (IDX_PORT))

#define PIN_C               ((BASE_C) + (IDX_PIN))
#define DDR_C               ((BASE_C) + (IDX_DDR))
#define PORT_C              ((BASE_C) + (IDX_PORT))

#define PIN_D               ((BASE_D) + (IDX_PIN))
#define DDR_D               ((BASE_D) + (IDX_DDR))
#define PORT_D              ((BASE_D) + (IDX_PORT))

#define PIN(addr)           ((addr) + IDX_PIN)
#define DDR(addr)           ((addr) + IDX_DDR)
#define PORT(addr)          ((addr) + IDX_PORT)

#endif