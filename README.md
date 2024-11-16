# STC89C52 Microcontroller Training
This repository features completed tasks from the STC89C52 training manual, showcasing various embedded systems concepts and practical applications. Each task folder includes the code, simulations, and associated resources. All tasks are executed on the STC89C52 microcontroller using the C programming language.
![STC89C52](https://github.com/user-attachments/assets/6e668ca1-8fcd-40de-aa70-d2430b4a7f5b)


# Project Review: 
## Task 1: Development Environment Setup & Microcontroller Study
- Install development tools, IDE, and drivers.
- Review the STC89C52RC microcontroller datasheet:
- Study the schematic of the development board.

## Task 2: Logic Analyzer Installation
- Download and install Logic 1.2.18 software for the logic analyzer.
- Configure the logic analyzer for debugging and signal analysis.

## Task 3: LED Blinking
- Blink LED D1 with a 500 ms delay.
- Measure the delay using a logic analyzer and attach screenshots showing the delay.

## Task 4: LED Pattern
- Alternated LEDs D1, D3, D5, D7 ON and D2, D4, D6, D8 OFF with a delay.

## Task 5: Button Interfacing Using Polling
- Controlled LED D1 using button K1 with polling.
- Added debouncing to avoid multiple triggers on a single press.

## Task 6: Button Interfacing Using Interrupt
- This program toggles LED D1 on or off with each press of button K1, using interrupts to detect button presses and debouncing to ensure accurate detection.
- Each button press toggles the LED state, providing efficient and responsive LED control for embedded applications.

## Task 7: LED control using buttons (polling) 
- Each button K1-K4 toggles LEDs D1-D4, respectively, using polling with debounce to ensure stable operation.

## Task 8: LED control using buttons (interrupts) 
- Buttons K1-K4 control LEDs D1-D4 with interrupts or polling if interrupts are unavailable.
- Debouncing is applied to ensure stable toggling for each LED.

## Task 9: Timer interrupt 
- Configured a timer to generate a 10 ms interrupt and toggle LED D1 in the ISR.
- Utilized auto-reload mode to eliminate the need for manual register reloading.
- Implemented an efficient timer-based LED toggle using an interrupt-driven approach.

## Task 10: Delay Generation with Timer
- Generated delays of 100 ms and 1000 ms using the timer interrupt.
- Controlled multiple LEDs with different timing intervals (LED D1: 10 ms, LED D2: 100 ms, LED D3: 1000 ms).
