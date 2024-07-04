#ifndef __REGISTER_H__
#define __REGISTER_H__

#define SET_BIT(addr, bit)          (*(addr) |= (0x1UL << (bit)))
#define CLR_BIT(addr, bit)          (*(addr) &= ~(0x1UL << (bit)))
#define WRITE_BIT(addr, bit, val)   ((val) ? SET_BIT(addr, bit) : CLR_BIT(addr, bit))

typedef reg_t                       volatile uint8_t;

#endif