#include <reg52.h>

sbit p1 = P2^2;   // LED 1 connected to P2.2
sbit p2 = P2^3;   // LED 2 connected to P2.3
sbit p3 = P2^4;   // LED 3 connected to P2.4

void delay(void); // Function prototype

void main() {
    while (1) {
        p1 = 0;      // Turn on LED 1
        p2 = 0;      // Turn on LED 2
        p3 = 0;      // Turn off LED 3 
        delay();
            
        p1 = 1;    
        p2 = 0;
        p3 = 0;
        delay();
            
        p1 = 0;    
        p2 = 1;
        p3 = 0;
        delay();

        p1 = 1;    
        p2 = 1;
        p3 = 0;
        delay();
    
        p1 = 0;    
        p2 = 0;
        p3 = 1;            
        delay();

        p1 = 1;    
        p2 = 0;
        p3 = 1;    
        delay();

        p1 = 0;    
        p2 = 1;
        p3 = 1;    
        delay();

        p1 = 1;    
        p2 = 1;
        p3 = 1;
        delay();

    }
}

void delay(void) {
    unsigned int x;
    for(x = 0; x < 10; x++) {
        TMOD =0x01;
        TL0 = 0xFD;
        TH0 = 0x4B;
        TR0 = 1;
        while (TF0 == 0); // Wait until timer overflow flag is set
        TF0 = 0; // Clear the overflow flag
        TR0 = 0; // Stop the timer
    }
}



