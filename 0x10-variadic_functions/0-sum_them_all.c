#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - sum all passed argumentts
* @n: first argument
*
* Return: sum of all argument
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list  nums;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
		
	va_start(nums, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
