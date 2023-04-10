#include <stdio.h>
#include "main.h"

/**
 * get_bit - Function that gets a bit
 * @n: Number/binary to be got the bit from
 *@index: The index that the mask will target
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);

}

