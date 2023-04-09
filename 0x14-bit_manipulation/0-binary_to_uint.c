#include "main.h"
#include "stddef.h"
/**
 *binary_to_uint - Entry point convert binary number to
 * an unsigned int
 *@b: const char pointer tostring of 0 and 1
 *
 *Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i = 0;

	if (b==NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && (b[i] != '1'))
		{
		return (0);
		}
	output = (output << 1) + (b[i] - '0');
	i++;
	}
	return (output);
}
