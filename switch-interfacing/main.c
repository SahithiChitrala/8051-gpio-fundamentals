#include <reg51.h>

/*
 * Project: 8051 Switch Interfacing
 * Description:
 * Reads digital input from Port 0 and
 * mirrors the input state to LEDs on Port 2.
 */

#define SWITCH_PORT P0
#define LED_PORT    P2

void main(void)
{
	SWITCH_PORT = 0xFF;   // Configure Port 0 as input
	LED_PORT    = 0x00;   // Initialize LEDs OFF

	while(1)
	{
		LED_PORT = SWITCH_PORT;   // Mirror switch state to LEDs
	}
}
