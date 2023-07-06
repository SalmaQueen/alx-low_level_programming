#include "main.h"

/**
 *binary_to_uint - Entry point convert binary number to
 * an unsigned int
 *@b: const char pointer tostring of 0 and 1
 *
 *Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (!b)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '0' && (b[i] != '1'))
		{
		return (0);
		}
	number = (number << 1) + (b[i] - '0');
	i++;
	}
	return (number);
}
