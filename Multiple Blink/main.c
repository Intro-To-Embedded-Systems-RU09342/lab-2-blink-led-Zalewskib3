#include <msp430.h> 



/**
 * main.c
 */
#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW + WDTHOLD;                 // Stop watchdog timer
      P1DIR |= 0x01;                          // Set P1.0 to output direction
      P1DIR |= 0x40;

      for (;;)
      {
        volatile unsigned int i, j;

        P1OUT ^= 0x01;                          // Toggle P1.0 using exclusive-OR


        i = 25000;                              // Delay
        do (i--);
        while (i != 0);

        P1OUT ^= 0x40;                          // Toggle P1.6 using exclusive-OR

        j = 20000;                              //Delay
        do(i--);
        while(i!=0);
      }

	return 0;
}

