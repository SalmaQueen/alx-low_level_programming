#include "main.h"

/**
* print_triangle - prints a tringle
* @size: value to check
* prints newline if size is less than zero
* Return: zero
*/

void print_triangle(int size)
{
	int row, col;

	for (row = 0; row < size; row++)
	{
		for (col = 1; col < (size - row); col++)
			_putchar(' ');
		for (col--; col < size; col++)
			_putchar(35);
		if (row < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
