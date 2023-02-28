#include "main.h"

/**
* print_most_numbers - print number 0 - 9 followed by newline
*
* Return: zero.
*/

void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num != 50 && num != 52)
			_putchar(num + '0');
	}
	_putchar('\n');
}
