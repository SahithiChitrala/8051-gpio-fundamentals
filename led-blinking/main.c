#include <reg51.h>

/*
 * Project: 8051 LED Blinking
 * Description:
 * Toggles all LEDs connected to Port 2.
 */

#define LED_PORT P2

void delay(void)
{
	unsigned int i;
	for(i = 0; i < 10000; i++);
}

void main(void)
{
	while(1)
	{
		LED_PORT = 0x00;   // LEDs OFF
		delay();

		LED_PORT = 0xFF;   // LEDs ON
		delay();
	}
}
