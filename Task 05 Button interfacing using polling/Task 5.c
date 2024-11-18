#include <reg52.h>

sbit led_1 = P2^0;
sbit button = P3^1;

void delay(unsigned int milliseconds) {
    unsigned int i, j;
    for(i = 0; i < milliseconds; i++)
        for(j = 0; j < 125; j++);  // Delay approximation for 1 ms
}

void main(void) 
	{
    while(1) 
			{
        if(button == 1) 
					{
            delay(20); // Debounce delay   
            if(button == 1) 
							{
                led_1 = !led_1; // Toggle LED state
                while(button == 1); // Wait for button release
                delay(20); // Debounce delay for button release
              }
          }
       }
   }
