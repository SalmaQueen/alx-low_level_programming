#include "variadic_functions.h"

/**
* print_strings - print strings
* @separator: string separator, to be print in between numbers
* @n: number arguments to passed
*
* Return: Print Null if separator or string is nil
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *j;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(list, char*);
		if (j == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", j, separator);
			else
				printf("%s", j);
		}
	}
	va_end(list);
	printf("\n");
}
