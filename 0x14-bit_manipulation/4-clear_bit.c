#include <stdio.h>
#include "main.h"

/**
 * clear_bit - clears the value of a bit to 1 at a given index
 * @n: pointer to unsigned long int
 * @index: index of the bit to set
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	return (*n & mask);
	return (1);
}

