# STC89C52 Microcontroller Training
This repository features completed tasks from the STC89C52 training manual, showcasing various embedded systems concepts and practical applications. Each task folder includes the code, simulations, and associated resources. All tasks are executed on the STC89C52 microcontroller using the C programming language.

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

## Task 7 : LED control using buttons (polling) 
- Each button K1-K4 toggles LEDs D1-D4, respectively, using polling with debounce to ensure stable operation.
