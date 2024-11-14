#include <reg51.h>

// LED
sbit led1 = P2^0; 
sbit led2 = P2^1; 
sbit led3 = P2^2; 
sbit led4 = P2^3; 

// Button
sbit btn1 = P3^1; 
sbit btn2 = P3^0; 
sbit btn3 = P3^2;
sbit btn4 = P3^3; 

void MSDelay(unsigned int);
void btn3_ISR() interrupt 0
{
    if(btn3 == 0) // Button pressed
    {
        MSDelay(50); // Delay for debouncing
        if(btn3 == 0) // Check button state again after debouncing
        {
            led3 = ~led3; // Toggle LED3 state
            while(btn3 == 0); // Wait until button is released
        }
    }
}
void btn4_ISR() interrupt 2
{
    if(btn4 == 0) // Button pressed
    {
        MSDelay(50); // Delay for debouncing
        if(btn4 == 0) // Check button state again after debouncing
        {
            led4 = ~led4; // Toggle LED4 state
            while(btn4 == 0); // Wait until button is released
        }
    }
}
void main()
{
	    // Enable interrupt for btn3
    EA = 1; // Enable global interrupt
    EX0 = 1; // Enable external interrupt 0
    EX1 = 1; // Enable external interrupt 1
	
    while(1)
    {
        // Check button K1 state
        if(btn1 == 0) // Button pressed
        {
            MSDelay(50); // Delay for debouncing
            if(btn1 == 0) // Check button state again after debouncing
            {
                led1 = ~led1; // Toggle LED1 state
                while(btn1 == 0); // Wait until button is released
            }
        }

        // Check button K2 state
        if(btn2 == 0)
        {
            MSDelay(50);
            if(btn2 == 0)
            {
                led2 = ~led2; // Toggle LED2 state
                while(btn2 == 0);
            }
        }
    }
}

void MSDelay(unsigned int itime) {
    unsigned int i, j;
    for(i = 0; i < itime; i++) {
        for(j = 0; j < 114; j++);
    }
}
