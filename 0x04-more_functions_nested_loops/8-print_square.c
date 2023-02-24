#include "main.h"

/**
* print_square - Prints square # followed by a new line,newline if size is zero
* @size: value to look for.
*
* Return: Zero
*/

void print_square(int size)
{
	int col, row;

	for (col = 0; col < size; col++)
	{
		for (row = 0; row < size; row++)
		{
			_putchar(35);
		}
		if (col != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

