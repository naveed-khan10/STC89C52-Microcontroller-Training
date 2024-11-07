#include <reg51.h>


#define LED1 P2


void Delay(unsigned int);

void main(void){
	while(1)
	{
			LED1 = 0xAA;
	    Delay(500);
      LED1 = 0x55;
	    Delay(500);
			
	}
}

void Delay(unsigned int ali)
{
	unsigned int j,k;
	for(j=0; j<ali; j++)
		for(k=0; k<114; k++);
}