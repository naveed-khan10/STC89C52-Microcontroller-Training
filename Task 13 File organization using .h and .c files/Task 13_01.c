// main.c

#include "reg52.h"  // Include microcontroller register definitions

void delay(unsigned int count) {
    unsigned int i, j;
    for (i = 0; i < count; i++) {
        for (j = 0; j < 500; j++) {
            // Adjust this nested loop delay for your microcontroller's clock speed
        }
    }
}

void main() {
    // Configure P1.0 as output for controlling the LED
    P1_0 = 0;  // Ensure LED is initially OFF

    while (1) {
        P1_0 = 1;     // Turn ON the LED (P1.0)
        delay(500);   // Delay for a while (adjust as needed for blinking speed)
        P1_0 = 0;     // Turn OFF the LED
        delay(500);   // Delay again
    }
}
