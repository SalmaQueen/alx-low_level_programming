#include "main.h"

/**
* print_number - prints an integer
* @n: value to check for
*
* Return: Zero
*/

void print_number(int n)
{
	unsigned int num1, num2, counter;

	if (n < 0)
	{
		_putchar(45);
		num1 = n * -1;
	}
	else
		num1 = n;

	num2 = num1;
	counter = 1;

	while (num2 > 9)
	{
		num2 /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((num1 / counter) % 10) + 48);
	}
}
