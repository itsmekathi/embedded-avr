/*===========================================================
| Task: Toggling the LED attached to a particular port
| Difficulty Level: Very Basic
| Author: Kathiravan Balasubramanian
| Language: Embedded C
| To compile: Run the script as mentioned by the author
| Date DEC 30 2019
=============================================================*/

#ifndef F_CPU
#define F_CPU 16000000UL // Or whatever may be your frequency
#endif

#include <avr/io.h>		// adding header files
#include <util/delay.h>		// for __delay__ms()

int main(void)
{
DDRC = 0x01;	// setting DDR of PORT C
while(1){
// LED on
PORTC = 0b00000001;	// PC0=HIGH = LED attached on PC0 is ON
_delay_ms(1000);		// Wait 500 milliseconds

// LED off
PORTC = 0b00000000;	// PC0 = LOW = LED attached to PC0 is off
_delay_ms(1000);		// wait 500 milliseconds
}
}
