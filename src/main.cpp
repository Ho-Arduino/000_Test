#include "registers.h"

int main()
{
    SET_BIT(DDRB, 5);
    SET_BIT(PORTB, 5);
    for(;;){}
}