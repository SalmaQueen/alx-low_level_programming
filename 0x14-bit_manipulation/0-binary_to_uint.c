#include "main.h"

/**
 * binary_to_uint - convert binary to int
 * @b: binary string
 *
 * Return: Number
 */

int slen(const char *s)
{
	int len;

	for (len = 0; s[len];)
		len++;

	return (len);
}

int valid(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] != '0' && s[i] != '1')
			return (0);

	return (1);
}

unsigned int binary_to_uint(const char *b)
{
	int len, i;
	unsigned int sum = 0;

	if (!b)
		return (sum);

	len = slen(b);
	if (!valid(b))
		return (0);

	for (i = 0, len--; b[i]; i++, len--)
		if (b[i] == '1')
			sum += 1 * (1 << len);

	return (sum);
}
