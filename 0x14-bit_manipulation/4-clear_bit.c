#include "main.h"

/**
 * clear_bit - clear bit at given index
 * @n: number
 * @index: index
 * Return: SUCCESS ? 1 : -1
 */

int out_of_range(unsigned int index)
{
	unsigned int bits;

	bits = sizeof(unsigned long int) * 8;
	if (index > bits)
		return (1);

	return (0);
}

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (out_of_range(index))
		return (-1);

	mask <<= index;
	*n &= ~mask;

	return (1);
}
