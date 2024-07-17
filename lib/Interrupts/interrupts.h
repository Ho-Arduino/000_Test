#ifndef __INTERRUPTS_H__
#define __INTERRUPTS_H__


#define PCIFR     ((reg_t *) 0x3Bu)  // Pin Change Interrupt Flag Register
#define EIFR      ((reg_t *) 0x3Cu)  // External Interrupt Flag Register
#define EIMSK     ((reg_t *) 0x3Du)  // External Interrupt Mask Register

#define PCICR     ((reg_t *) 0x68u)  // Pin Change Interrupt Control Register
#define EICRA     ((reg_t *) 0x69u)  // External Interrupt Control Register A
#define PCMSK0    ((reg_t *) 0x6Bu)  // Pin Change Mask Register 0
#define PCMSK1    ((reg_t *) 0x6Cu)  // Pin Change Mask Register 1
#define PCMSK2    ((reg_t *) 0x6Du)  // Pin Change Mask Register 2
#endif