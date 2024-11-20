#include <reg52.h>

#define Port_0 P0

sbit p1 = P2^2;   // LED 1 connected to P2.2
sbit p2 = P2^3;   // LED 2 connected to P2.3
sbit p3 = P2^4;   // LED 3 connected to P2.4

void ms_delay(unsigned int delay_time) {
    unsigned int i, j;
    for (i = 0; i < delay_time; i++) {
        for (j = 0; j < 112; j++);   
    }
}

void main(void) {


    while (1) {
			  p1 = 1;    // Turn off LED 1
        p2 = 1;    // Turn off LED 2
        p3 = 1;    // Turn off LED 3
        P0 = 0x06;
        ms_delay(700);  

			  p1 = 0;    // Turn off LED 1
        p2 = 1;    // Turn off LED 2
        p3 = 1;    // Turn off LED 3       
        P0 = 0x5B;
        ms_delay(700);  
      
			  p1 = 1;    // Turn off LED 1
        p2 = 0;    // Turn off LED 2
        p3 = 1;    // Turn off LED 3
        P0 = 0x4F;
        ms_delay(700);  

			  p1 = 0;    // Turn off LED 1
        p2 = 0;    // Turn off LED 2
        p3 = 1;    // Turn off LED 3			
			  P0 = 0x66;
        ms_delay(700);  
      
			  p1 = 1;    // Turn off LED 1
        p2 = 1;    // Turn off LED 2
        p3 = 0;    // Turn off LED 3
        P0 = 0x6D;
        ms_delay(700); 

			  p1 = 0;    // Turn off LED 1
        p2 = 1;    // Turn off LED 2
        p3 = 0;    // Turn off LED 3
				P0 = 0x7D;
        ms_delay(700);  
      
			  p1 = 1;    // Turn off LED 1
        p2 = 0;    // Turn off LED 2
        p3 = 0;    // Turn off LED 3
        P0 = 0x07;
        ms_delay(700); 

			  p1 = 0;    // Turn off LED 1
        p2 = 0;    // Turn off LED 2
        p3 = 0;    // Turn off LED 3
				P0 = 0x7F;
        ms_delay(700); 


    }
}
