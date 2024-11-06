#include <reg51.h>


#define LED1 P2
#define BIT0 0xFF
#define BIT1 0x02
#define BIT2 0x04
#define BIT3 0x08
#define BIT4 0x10
#define BIT5 0x20
#define BIT6 0x40
#define BIT7 0x80

void Delay(unsigned int);

void main(void){
	while(1)
	{
			LED1 = BIT0;
	    Delay(500);
      LED1 = LED1 & 0xFE;
	    Delay(500);
			
	}
}

void Delay(unsigned int ali)
{
	unsigned int j,k;
	for(j=0; j<ali; j++)
		for(k=0; k<114; k++);
}