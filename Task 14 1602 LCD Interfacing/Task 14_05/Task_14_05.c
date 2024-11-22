#include "LCD.h" // Include the LCD header file

int main() {
    
		while(1){
		lcd_init();    // Initialize the LCD
    lcd_clear(); // Clear the LCD

    // Example usage
    lcd_write(0, 0, 'T');
    lcd_write(0, 1, 'E');
    lcd_write(0, 2, ' ');
    lcd_write(0, 3, 'H');
    lcd_write(0, 4, 'A');
		lcd_write(0, 5, 'F');
			lcd_write(0, 6, 'A');
			lcd_write(0, 7, ' ');
			lcd_write(0, 8, 'Y');
			lcd_write(0, 9, 'E');
			lcd_write(0, 10, 'E');
			lcd_write(0, 11, ' ');
			lcd_write(0, 12, 'k');
			lcd_write(0, 13, 'A');

			
    lcd_set_cursor(1, 0);  // Set cursor to the beginning of the second line
    lcd_write(1, 0, 'K');  // Write 'W' at the beginning of the second line
    lcd_write(1, 1, 'H');  // Write 'o' at the second position of the second line
    lcd_write(1, 2, 'A');  // Write 'r' at the third position of the second line
    lcd_write(1, 3, 'W');  // Write 'l' at the fourth position of the second line
    lcd_write(1, 4, 'S');  // Write 'd' at the fifth position of the second line
		lcd_write(1, 5, 'H');
		lcd_write(1, 6, 'L');
		lcd_write(1, 7, 'A');
		//    while(1); // Infinite loop to keep the microcontroller running
    return 0;
		}
}