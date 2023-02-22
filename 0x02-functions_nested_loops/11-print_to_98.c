#include <stdio.h>
#include "main.h"

/**
* print_to_98 - print 0 - 98
* @n: value to check for
*
* Result: Always 0
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

