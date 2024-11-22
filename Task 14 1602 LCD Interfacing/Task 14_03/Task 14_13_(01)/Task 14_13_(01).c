#include <stdio.h>
#include <reg51.h>
#include "LCD.h"  //including the header file(LCD.h)


int main() {
    text = 0x00; 
    lcd_init();  

    lcd_data('E');
    delay(); 

    lcd_data('N');
    delay(); 
	
    lcd_data('G');
    delay(); 
	
    lcd_data('R');
    delay(); 
	
    lcd_data('.');
    delay(); 
	
    lcd_data('N');
    delay();     

    lcd_data('A');
    delay();  

    lcd_data('V');
    delay();

    lcd_data('E');
    delay();      

    lcd_data('E');
    delay();

    lcd_data('D');
    delay();    
   
    lcd_data(' ');
    delay();       

    lcd_data('K');
    delay();      

    lcd_data('H');
    delay();      
    
    lcd_data('A');
    delay();      

    lcd_data('N');
    delay(); 
 
    return 0;        
}
