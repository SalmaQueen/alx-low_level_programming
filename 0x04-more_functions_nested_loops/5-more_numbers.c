#include "main.h"

/**
* more_numbers - print 10 times number 0 - 14 followed by newline.
*
* Return: Zero
*/

void more_numbers(void)
{
	int count, num;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
