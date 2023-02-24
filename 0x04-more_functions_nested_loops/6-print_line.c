#include "main.h"

/**
* print_line - Draws a straight line n number pf times.
* @n: value to check.
*
* Return: Zero.
*/

void print_line(int n)
{
	int count = 0;

	for  (; count < n; count++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
