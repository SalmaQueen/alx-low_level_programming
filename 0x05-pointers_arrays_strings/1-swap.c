#include "main.h"

/**
* swap_int - swap the value of two integers
* @a: value to check fro
* @b: value to check for
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
