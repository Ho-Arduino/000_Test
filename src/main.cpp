#include "Arduino.h"
#include "avr/interrupt.h"
#include "interrupts.h"
#  define ASR(vector, ...)            \
    extern "C" void vector (void) __attribute__ ((signal,__INTR_ATTRS)) __VA_ARGS__; \
    void vector (void)

extern "C" void PCINT2_vect(void) __attribute__ ((signal, used, externally_visible));
void __vector_5(void) {
    PINB |= (1 << 5);
}

void setup() {
    attachInterrupt
    SREG &= ~(1 << 7);
    DDRB |= (1 << 5);
    PCICR |= (1 << 2);
    PCMSK2 |= (1 << 2);
    SREG |= (1 << 7);
}

void loop() {
}
