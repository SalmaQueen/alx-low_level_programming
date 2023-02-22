#include "main.h"

/**
* print_sign - prints sign of a number
* @n: variable to check for.
*
* Return: return + if 'n' is greater than 0
* or -1 if 'n' is less than 0
* else returns  0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
