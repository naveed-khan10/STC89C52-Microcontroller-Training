//FOR FIRST LINE DISPLAY 


#include <reg51.h>

sbit rs = P2^6;
sbit rw = P2^5;
sbit en = P2^7;

#define text P0

void delay() {
    int i, j;
    for(i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++);
    }
}

// Add lcd_delay function prototype
void lcd_delay();

// Define lcd_delay function
void lcd_delay() {
    delay();
}

void lcd_cmd(unsigned char a) {
    text = a;
    rs = 0;
    rw = 0;
    en = 1;
    lcd_delay();
    en = 0;
}

void lcd_data(unsigned char b) {
    text = b;
    rs = 1;
    rw = 0;
    en = 1;
    lcd_delay();
    en = 0;
}

void lcd_init() {
    lcd_cmd(0x01);
    delay();
    lcd_cmd(0x38);
    delay();
    lcd_cmd(0x0E);
    delay();
    lcd_cmd(0x10);
    delay();
    lcd_cmd(0x80);
    delay();
}

int main() {
    text = 0x00;
    lcd_init();
	
		lcd_data('E');
    delay();
		
	  lcd_data('N');
    delay();0
	
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
    	

		
    // Return statement for main function
    return 0;        
}



