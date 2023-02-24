#include "main.h"

/**
* print_diagonal - print diagonal line n number of times
* @n: the vlaue to check.
*
* Return: Zero
*/

void print_diagonal(int n)
{
	int count, space;

	for (count = 0; count < n; count++)
	{
		for (space = 0; space < count; space++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (count < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
