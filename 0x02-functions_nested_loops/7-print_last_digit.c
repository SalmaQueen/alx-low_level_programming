#include "main.h"

/**
* print_last_digit - print last 10 digits of a number
* @num: value to check
*
* Return: Always 0
*/

int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
