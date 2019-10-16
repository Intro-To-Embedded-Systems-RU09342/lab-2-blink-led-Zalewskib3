# Multiple Blink
This lab required a little but more than the single button lab. It starts off the same way as every code, with the initialization of the .h file pertaining to the board we are utilizing, msp430.h. The first initialization stops the watchdog timer to make sure the processor doesnt automatically reset. Then, we initialize 2 different LEDs to the output direction, this is to make sure they will get the data we want to send. After this, in the main function, there is a for loop, the first part pertains to the first LED, with the XOR gate to toggle it between on and off, with the number underneath being the delay time, then following this is the second LEDs XOR toggle, with its delay after that. The whole for loop shows how the two different numbers for delay times can yield a different rate for each LED.





