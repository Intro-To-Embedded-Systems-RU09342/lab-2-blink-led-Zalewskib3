# Button Blink
This lab required us to make the button blink turn on and off via a switch. Which isn't changing much from the code for simple blink. You still initialize the MSP430.h file and turn off the watchdog timer. After this the code is a very simple for loop to toggle the LED however you also need to initalize a resitor to enable it to use as a pull up/down resistor. After this, the switch is initialized to make sure we can access it. Inside the for loop an integer is assigned that ANDs the button with the output which makes it so the LED will only toggle if both equal a logic one. 



