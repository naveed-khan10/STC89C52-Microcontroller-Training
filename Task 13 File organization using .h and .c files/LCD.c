// LCD.c

#include <reg52.h>  // Include reg52.h for 8952 microcontroller
#include "LED.h"    // Include LED header file

// Function to toggle the LED state
void toggleLED() {
    LED_PIN = !LED_PIN;  // Toggle the LED state
}
