

/**
 * main.c
 */
#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD; //stop watchdog timer

    P1DIR = 0x01;
    P1REN |= BIT3;
    P1OUT |= BIT3;

    for (;;)
    {
        volatile unsigned int i;

        int temp = P1OUT + BIT3;
        if (temp = 2){
            P1OUT ^= 0x01;
            do (i--);
            while (i!=0);
        }
    }
	return 0;
}

