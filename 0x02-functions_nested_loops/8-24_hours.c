#include "main.h"

/**
* jack_bauer - print last hour from 00:00 - 23:59
*
* Return: Always 0
*/

void jack_bauer(void)
{
	int hr = 0;
	int min;

	while (hr <= 23)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min += 1;
		}
		hr += 1;
	}
}
