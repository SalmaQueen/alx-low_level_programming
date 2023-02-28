#include "main.h"

/**
* _atoi - converts a  string to an integer
* @s: inout string
* Return: Integer
*/

int _atoi(char *s)
{
	int i, j, x, len, z, digit;

	i = 0;
	j = 0;
	x = 0;
	len = 0;
	z = 0;
	digit = 0;

	while (s[len] != '\n')
		len++;
	while (i < len && z == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			x = x * 10 + digit;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}
	if (z == 0)
		return (0);
	return (x);
}
