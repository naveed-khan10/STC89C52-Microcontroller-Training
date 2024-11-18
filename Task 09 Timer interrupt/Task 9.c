#include <reg52.h>

sbit led_1 = P2^0;

void Timer_0() interrupt 1 {
    unsigned char x, y;
    
    for (x = 0; x <84; x++)
        for (y = 0; y < 35; y++);
    
    led_1 = ~led_1;      // Toggle LED
}

void main() {
    IE = 0x82;           // Enable Timer 0 interrupt       (0x82 = 1000 0010)
    TMOD = 0x02;         // Set Timer 0 mode two 8-bit auto reload
    TH0 = -46;           // Set initial value for Timer 0 high byte
    TR0 = 1;
}
