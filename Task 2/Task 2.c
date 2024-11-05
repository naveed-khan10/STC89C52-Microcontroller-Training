#include <reg51.h>
#define Led P2
void main(void)
	{
		unsigned int x;
		for(;;)
			{
				Led = ~0x01;
				for(x=0; x<800; x++);

				Led = ~0x00;
				for(x=0; x<800; x++);				
			
			}
	}