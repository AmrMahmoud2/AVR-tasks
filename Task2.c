/*
 * 7 segment.c
 *
 * Created: 01-Dec-17 11:07:20 AM
 * Author : Amr
 */ 

#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 1000000 unsigned long



int main()
{
	DDRA=0b11111111;
	while (1)
	{
		PORTA=0b01000000;
		_delay_ms(1000);
		PORTA=0b00000110;
		_delay_ms(1000);
		PORTA=0b01011011;
		_delay_ms(1000);
		PORTA=0b01001111;
		_delay_ms(1000);
		PORTA=0b01100110;
		_delay_ms(1000);
		PORTA=0b01101101;
		_delay_ms(1000);
		PORTA=0b01111101;
		_delay_ms(1000);
		PORTA=0b00100011;
		_delay_ms(1000);
		PORTA=0b01111111;
		_delay_ms(1000);
		PORTA=0b01101111;
		_delay_ms(1000);

	}
	return 0;
}
