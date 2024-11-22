/*..This file(T_14_4.c) serves as a Main file..*/

#include "LCD.h"

int main() {
    while(1){
		lcd_init();    // Initialize the LCD
		lcd_clear(); // Clear the LCD
	
    // Example usage
    lcd_write(0, 0, 'H');  // Write 'H' at the beginning of the first line
    lcd_write(0, 1, 'e');  // Write 'e' at the second position of the first line
    lcd_write(0, 2, 'l');  // Write 'l' at the third position of the first line
    lcd_write(0, 3, 'l');  // Write 'l' at the fourth position of the first line
    lcd_write(0, 4, 'o');  // Write 'o' at the fifth position of the first line
	  lcd_write(0, 5, ' ');  
		lcd_write(0, 6, 'E');  
    lcd_write(0, 7, 'v');  
    lcd_write(0, 8, 'e');  
    lcd_write(0, 9, 'r');  
    lcd_write(0, 10, 'y');
		lcd_write(0, 11, 'o');  
    lcd_write(0, 12, 'n');  
    lcd_write(0, 13, 'e'); 
			
		// Set cursor to the beginning of the second line
    lcd_write(1, 0, 'H');  
    lcd_write(1, 1, 'o');  
    lcd_write(1, 2, 'w');  
    lcd_write(1, 3, ' ');  
    lcd_write(1, 4, 'A');  
    lcd_write(1, 5, 'r');  
    lcd_write(1, 6, 'e');  
    lcd_write(1, 7, ' ');  
    lcd_write(1, 8, 'Y');  
    lcd_write(1, 9, 'o');  
		lcd_write(1, 10, 'u');  
		lcd_write(1, 11, '?');  

			}
}