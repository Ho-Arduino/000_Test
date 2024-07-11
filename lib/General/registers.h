#ifndef __REGISTERS_H__
#define __REGISTERS_H__

#include <inttypes.h>

#define SET_BIT(addr, bit)          (*(addr) |= (0x1UL << (bit)))
#define CLR_BIT(addr, bit)          (*(addr) &= ~(0x1UL << (bit)))
#define WRITE_BIT(addr, bit, val)   ((val) ? SET_BIT(addr, bit) : CLR_BIT(addr, bit))
#define READ_BIT(addr, bit)         ((*(addr) & (0x1UL << (bit))) ! 0)

typedef volatile uint8_t *   reg_t;

#define PINB      ((reg_t) 0x23u)  // Port B Input Address
#define DDRB      ((reg_t) 0x24u)  // Port B Data Direction Register
#define PORTB     ((reg_t) 0x25u)  // Port B Data Register

#define PINC      ((reg_t) 0x26u)  // Port C Input Address
#define DDRC      ((reg_t) 0x27u)  // Port C Data Direction Register
#define PORTC     ((reg_t) 0x28u)  // Port C Data Register
#define PIND      ((reg_t) 0x29u)  // Port D Input Address
#define DDRD      ((reg_t) 0x2Au)  // Port D Data Direction Register
#define PORTD     ((reg_t) 0x2Bu)  // Port D Data Register
#define TIFR0     ((reg_t) 0x35u)  // Timer/Counter 0 Interrupt Flag Register
#define TIFR1     ((reg_t) 0x36u)  // Timer/Counter 1 Interrupt Flag Register
#define TIFR2     ((reg_t) 0x37u)  // Timer/Counter 2 Interrupt Flag Register
#define PCIFR     ((reg_t) 0x3Bu)  // Pin Change Interrupt Falg Register
#define EIFR      ((reg_t) 0x3Cu)  // External Interrupt Flag Register
#define EIMSK     ((reg_t) 0x3Du)  // External Interrupt Mask Register
#define GPIOR0    ((reg_t) 0x3Eu)  // General Purpose I/O Register 0
#define EECR      ((reg_t) 0x3Fu)  // EEPROM Control Register
#define EEDR      ((reg_t) 0x40u)  // EEPROM Data Register
#define EEARL     ((reg_t) 0x41u)  // EEPROM Address Register (Low)
#define EEARH     ((reg_t) 0x42u)  // EEPROM Address Register (High)
#define GTCCR     ((reg_t) 0x43u)  // General Timer/Counter Control Register
#define TCCR0A    ((reg_t) 0x44u)  // Timer/Counter 0 Control Register A
#define TCCR0B    ((reg_t) 0x45u)  // Timer/Counter 0 Control Register B
#define TCNT0     ((reg_t) 0x46u)  // Timer/Counter 0 Register
#define OCR0A     ((reg_t) 0x47u)  // Output Compare Register 0 A
#define OCR0B     ((reg_t) 0x48u)  // Output Compare Register 0 B
#define GPIOR1    ((reg_t) 0x4Au)  // General Purpose I/O Register 1
#define GPIOR2    ((reg_t) 0x4Bu)  // General Purpose I/O Register 2
#define SPCR      ((reg_t) 0x4Cu)  // SPI Control Register
#define SPSR      ((reg_t) 0x4Du)  // SPI Status Register
#define SPDR      ((reg_t) 0x4Eu)  // SPI Data Register
#define ACSR      ((reg_t) 0x50u)  // Analog Comparator Control And Status Register
#define SMCR      ((reg_t) 0x53u)  // Sleep Mode Control Register
#define MCUSR     ((reg_t) 0x54u)  // MCU Status Register
#define MCUCR     ((reg_t) 0x55u)  // MCU Control Register
#define SPMCSR    ((reg_t) 0x57u)  // Store Program Memory Control and Status Register
#define SPL       ((reg_t) 0x5Du)  // Stack Pointer Register (Low)
#define SPH       ((reg_t) 0x5Eu)  // Stack Pointer Register (High)
#define SREG      ((reg_t) 0x5Fu)  // AVR Status Register
#define WDTCSR    ((reg_t) 0x60u)  // Watchdog Timer Control Register
#define CLKPR     ((reg_t) 0x61u)  // Clock Prescal Register
#define PRR       ((reg_t) 0x64u)  // Power Reduction Register
#define OSCCAL    ((reg_t) 0x66u)  // Oscillator Calibration Register
#define PCICR     ((reg_t) 0x68u)  // Pin Change Interrupt Control Register
#define EICRA     ((reg_t) 0x69u)  // External Interrupt Control Register A
#define PCMSK0    ((reg_t) 0x6Bu)  // Pin Change Mask Register 0
#define PCMSK1    ((reg_t) 0x6Cu)  // Pin Change Mask Register 1
#define PCMSK2    ((reg_t) 0x6Du)  // Pin Change Mask Register 2
#define TIMSK0    ((reg_t) 0x6Eu)  // Timer/Counter Interrupt Mask Register 0
#define TIMSK1    ((reg_t) 0x6Fu)  // Timer/Counter Interrupt Mask Register 1
#define TIMSK2    ((reg_t) 0x70u)  // Timer/Counter Interrupt Mask Register 2
#define ADCL      ((reg_t) 0x78u)  // ADC Data Register (Low)
#define ADCH      ((reg_t) 0x79u)  // ADC Data Register (High)
#define ADCSRA    ((reg_t) 0x7Au)  // ADC Control and Status Register A
#define ADCSRB    ((reg_t) 0x7Bu)  // ADC Control and Status Register B
#define ADMUX     ((reg_t) 0x7Cu)  // ADC Multiplexer Selection Register
#define DIDR0     ((reg_t) 0x7Eu)  // Digital Input Disable Register 0
#define DIDR1     ((reg_t) 0x7Fu)  // Digital Input Disable Register 1
#define TCCR1A    ((reg_t) 0x80u)  // Timer/Counter 1 Control Register A
#define TCCR1B    ((reg_t) 0x81u)  // Timer/Counter 1 Control Register B
#define TCCR1C    ((reg_t) 0x82u)  // Timer/Counter 1 Control Register C
#define TCNT1L    ((reg_t) 0x84u)  // Timer/Counter 1 Register (Low)
#define TCNT1H    ((reg_t) 0x85u)  // Timer/Counter 1 Register (High)
#define ICR1L     ((reg_t) 0x86u)  // Input Capture Register 1 (Low)
#define ICR1H     ((reg_t) 0x87u)  // Input Capture Register 1 (High)
#define OCR1AL    ((reg_t) 0x88u)  // Output Compare Register Register 1 A (Low)
#define OCR1AH    ((reg_t) 0x89u)  // Output Compare Register Register 1 A (High)
#define OCR1BL    ((reg_t) 0x8Au)  // Output Compare Register Register 1 B (Low)
#define OCR1BH    ((reg_t) 0x8Bu)  // Output Compare Register Register 1 B (High)
#define TCCR2A    ((reg_t) 0xB0u)  // Timer/Counter 2 Control Register A
#define TCCR2B    ((reg_t) 0xB1u)  // Timer/Counter 2 Control Register B
#define TCNT2     ((reg_t) 0xB2u)  // Timer/Counter 2 Register
#define OCR2A     ((reg_t) 0xB3u)  // Output Compare Register Register 2 A
#define OCR2B     ((reg_t) 0xB4u)  // Output Compare Register Register 2 B
#define ASSR      ((reg_t) 0xB6u)  // Asynchronous Status Register
#define TWBR      ((reg_t) 0xB8u)  // TWI Bit Rate Register
#define TWSR      ((reg_t) 0xB9u)  // TWI Status Reigster
#define TWAR      ((reg_t) 0xBAu)  // TWI (Slave) Address Register
#define TWDR      ((reg_t) 0xBBu)  // TWI Data Register
#define TWCR      ((reg_t) 0xBCu)  // TWI Control Register
#define TWAMR     ((reg_t) 0xBDu)  // TWI (Slave) Address Mask Regiser
#define UCSR0A    ((reg_t) 0xC0u)  // USART 0 Control and Status Register A
#define UCSR0B    ((reg_t) 0xC1u)  // USART 0 Control and Status Register B
#define UCSR0C    ((reg_t) 0xC2u)  // USART 0 Control and Status Register C
#define UBRR0L    ((reg_t) 0xC4u)  // USART 0 Baud Rate Register (Low)
#define UBRR0H    ((reg_t) 0xC5u)  // USART 0 Baud Rate Register (High)
#define UDR0      ((reg_t) 0xC6u)  // USART 0 I/O Data Register




#endif