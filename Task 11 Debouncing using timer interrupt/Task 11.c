#include <reg51.h>

sbit K1 = P3^1;  // Define button K1 connected to P1.0
sbit LED = P2^0;  // Define LED connected to P1.1

bit k1_btn_state = 0;
unsigned char k1_press_cntr = 0;
unsigned char k1_release_cntr = 0;

void timer0_isr() interrupt 1 {
   TH0 = 0xEE;  // Reload timer for 10 ms interrupt
   TL0 = 0x00;

   if (k1_btn_state == 0) {
       if (K1 == 0) {  // Button pressed
           k1_press_cntr++;
           if (k1_press_cntr == 100) {
               LED = ~LED;  // Toggle LED
               k1_btn_state = 1;  // Change state to detect release
           }
       } else {
           k1_press_cntr = 0;
       }
   } else {
       if (K1 == 1) {  // Button released
           k1_release_cntr++;
           if (k1_release_cntr == 100) {
               k1_btn_state = 0;  // Allow for next press detection
           }
       } else {
           k1_release_cntr = 0;
       }
   }
}

void main() {
   TMOD = 0x01;  // Set timer 0 to mode 1 (16-bit)
   TH0 = 0xEE;   // Initialize timer for 10 ms interrupt
   TL0 = 0x00;
   TR0 = 1;      // Start timer 0
   ET0 = 1;      // Enable timer 0 interrupt
   EA = 1;       // Enable global interrupts

   while (1) {
       // Other tasks here
   }
}
