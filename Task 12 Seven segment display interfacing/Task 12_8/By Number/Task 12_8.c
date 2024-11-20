#include <reg52.h>

sbit p1 = P2^2;   // LED 1 connected to P2.2
sbit p2 = P2^3;   // LED 2 connected to P2.3
sbit p3 = P2^4;   // LED 3 connected to P2.4

//unsigned long num =  42354245;  //part A
unsigned long num = 97561654;      //part B

 
void delay(void) {
    unsigned int x;
    for (x = 0; x < 10; x++) {  // Adjust loop count for desired delay
        TMOD = 0x01;  // Timer 0, Mode 1 (16-bit timer)
        TL0 = 0x00;
        TH0 = 0x00;
        TR0 = 1;  // Start Timer 0
        while (TF0 == 0); // Wait until timer overflow flag is set
        TF0 = 0; // Clear the overflow flag
        TR0 = 0; // Stop the timer
    }
}

void display(unsigned long num, int i) {
    int array[8];  // Define array within the display function
    int j = 0;
    
    // Extract digits from num and store in array
    while (num > 0) {
        array[j] = num % 10;
        num = num / 10;
        j++;
    }
    
    // Display the digit based on the index i
    if (array[i] == 0) 
        P0 = 0x3F; 
    else if (array[i] == 1) 
        P0 = 0x06;  
    else if (array[i] == 2) 
        P0 = 0x5B; 
    else if (array[i] == 3) 
        P0 = 0x4F; 
    else if (array[i] == 4) 
        P0 = 0x66; 
    else if (array[i] == 5) 
        P0 = 0x6D; 
    else if (array[i] == 6) 
        P0 = 0x7D; 
    else if (array[i] == 7) 
        P0 = 0x07; 
    else if (array[i] == 8) 
        P0 = 0x7F; 
    else if (array[i] == 9) 
        P0 = 0x6F; 
}

void main(void) {
    while (1) {
        p1 = 1;
        p2 = 1;
        p3 = 1;
        display(num, 7);  // Display digit at index 0
        delay();

        p1 = 0;
        p2 = 1;
        p3 = 1;
        display(num, 6);  // Display digit at index 1
        delay();
        
        p1 = 1;
        p2 = 0;
        p3 = 1;
        display(num, 5);  // Display digit at index 2
        delay();

        p1 = 0;
        p2 = 0;
        p3 = 1;
        display(num, 4);  // Display digit at index 3
        delay();
        
        p1 = 1;
        p2 = 1;
        p3 = 0;
        display(num, 3);  // Display digit at index 4
        delay();

        p1 = 0;
        p2 = 1;
        p3 = 0;
        display(num, 2);  // Display digit at index 5
        delay();
        
        p1 = 1;
        p2 = 0;
        p3 = 0;
        display(num, 1);  // Display digit at index 6
        delay();

        p1 = 0;
        p2 = 0;
        p3 = 0;
        display(num, 0);  // Display digit at index 7
        delay();
    }
}
