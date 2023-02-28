#include "main.h"
#include <stdio.h>

/**
* print_array - print array of integers and followed by newline
* n is the number of elements in the array to print
* must be separated by comma followed by space
* must be in the same order in the array
* @a: vlaue to check
* @n: value to check
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	if (i == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
