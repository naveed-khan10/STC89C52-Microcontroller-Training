#include <reg52.h>

//#define LED P0

sbit p1 = P2^2;   // LED 1 connected to P2.2
sbit p2 = P2^3;   // LED 2 connected to P2.3
sbit p3 = P2^4;   // LED 3 connected to P2.4

int count_10 = 0;

void timer0(void) interrupt 1
{
    count_10++;  
    
    if (count_10 == 205)
    {
        p1 = 0;      
        p2 = 0;      
        p3 = 0;     
      P0 = 0xFF;
    }
        
    if (count_10 ==410)
    { 
        p1 = 1;    
        p2 = 0;
        p3 = 0;
       P0 = 0xFF;
    }
    
    if (count_10 == 615)
    {
        p1 = 0;    
        p2 = 1;
        p3 = 0;
        P0 = 0xFF;
    }

    if (count_10 == 820)
    {
        p1 = 1;    
        p2 = 1;
        p3 = 0;
      P0 = 0xFF;
    }

    if (count_10 == 1025)
    {
        p1 = 0;    
        p2 = 0;
        p3 = 1;            
			P0 = 0xFF;
    }

    if (count_10 == 1230)
    {
        p1 = 1;    
        p2 = 0;
        p3 = 1;    
        P0 = 0xFF;
    }
    
    if (count_10 == 1440)
    {
        p1 = 0;    
        p2 = 1;
        p3 = 1;    
        P0 = 0xFF;
    }
    
    if (count_10 == 1645)
    {
        p1 = 1;    
        p2 = 1;
        p3 = 1;
			P0 = 0xFF;
        count_10 = 0;
    } 
}

void main(void)
{
    TMOD = 0x02;    // Timer 0, mode 2
    TH0 = 0xF7;     // Initialize Timer 0 for 10 ms delay
    IE = 0x82;      // Enable Timer 0 interrupt
    TR0 = 1;        // Start Timer 
    
    while (1)
    {
       // You can add other operations here if needed
    }
}
