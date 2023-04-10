#include "main.h"

/**
 * print_binary - Function that prints the binary rep of a number
 * @n: Number of print in a binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int flag = 0;

	while (mask)
	{
		if (n & mask)
		{
			flag = 1;
			printf("1");
		}
		else if (flag)
		{
			printf("0");
		}
		mask = mask >> 1;
	}
	if (!flag)
	{
		printf("0");
	}
}
