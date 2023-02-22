#include "main.h"

/**
* times_table - print 9 times table
*
* Return: Always 0
*/

void times_table(void)
{
	int row, col;
	int multiple = 0;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			multiple = (row * col);
			if (multiple < 10)
			{
				if (col != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(multiple + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((multiple / 10) + '0');
				_putchar((multiple % 10) + '0');
			}
			if (col != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

