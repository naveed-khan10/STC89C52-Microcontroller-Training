#include <reg51.h>


#define LED1 P2

void Delay(unsigned int);

void main(void){
	while(1)
	{
			LED1 = 0xFE;
	    Delay(500);
      LED1 = LED1 | 0xEF;
	    Delay(500);
			
	}
}

void Delay(unsigned int ali)
{
	unsigned int j,k;
	for(j=0; j<ali; j++)
		for(k=0; k<114; k++);
}