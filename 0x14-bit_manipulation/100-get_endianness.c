#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
