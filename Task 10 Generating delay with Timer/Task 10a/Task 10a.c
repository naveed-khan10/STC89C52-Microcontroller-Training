#include <reg52.h>

sbit led_1 = P2^0; // D1
sbit led_2 = P2^1; // D2
sbit led_3 = P2^2; // D2

void Timer_0() interrupt 1 {
    unsigned int x , y , z;
    x++;
	  y++;
	  z++;
    // For D1 (led_1) 10ms
    if (x == 36) {
        led_1 = ~led_1; // Toggle LED 1
        x = 0;
    }

    // For D2 (led_2) 100ms
    if (y == 360) {
        led_2 = ~led_2; // Toggle LED 2
        y = 0;
    }
		
		// For D3 (led_3) 1000ms
    if (z == 3600) {
        led_3 = ~led_3; // Toggle LED 2
        z = 0;
}
		
}
void main() {
    IE = 0x82;      // Enable Timer 0 interrupt (0x82 = 1000 0010)
    TMOD = 0x02;    // Set Timer 0 mode to 8-bit auto reload
    TH0 = 0;      // Set initial value for Timer 0 high byte
    TR0 = 1;        // Start Timer 0
	  while(1)
		{
		
		}
}

