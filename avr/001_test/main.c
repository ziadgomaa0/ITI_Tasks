/*
 * main.c
 *
 *  Created on: Jul 31, 2023
 *      Author: setfr
 */
#include <avr/delay.h>
#include "BIT_MATH.h"

#include <avr/io.h>

int main(void)
{
	DDRA=0xff;
	//DDRA=0b00000001; //set to one to be ouput
	DDRD=255;
	DDRB=0x00;
	PORTB = 0XFF;
	while(1)
	{
		//PORTD=0b10011111;
        if (1)
        {
        	PORTD=0xff;
        	_delay_ms(500);
        	PORTD=0x00;
        	_delay_ms(500);
        }
        else
        	PORTD=0x00;



		 //PORTA = 0x01;
		/* Apply 0.5 Second Delay
		_delay_ms(500);
		// Turn LED off
		PORTA = 0x00;
		// Apply 0.5 Second Delay
		_delay_ms(500);
*/
	}
	return 0;
}