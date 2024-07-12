#include "gpio.h"
#define a PIN(PD2)
int main(){
    gpio led(PB5, OUTPUT);
    gpio sw(PD2, INPUT);
    for(;;){
        if (!sw.get_input()) {
            led.set_low();
        } else {
            led.set_high();
        }
    }
}