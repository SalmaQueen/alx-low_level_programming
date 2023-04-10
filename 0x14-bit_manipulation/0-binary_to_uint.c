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
	unsigned int result = 0;

	if (!b)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}

