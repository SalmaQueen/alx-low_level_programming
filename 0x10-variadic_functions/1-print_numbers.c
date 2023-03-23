#include "variadic_functions.h"

/**
* print_numbers - print numbers
* @separator: string to be printed between numbers
* @n: number of arguments
*
* Return: sum of all arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(args, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	va_end(args);
	printf("\n");
}
