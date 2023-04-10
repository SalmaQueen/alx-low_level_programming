#include "main.h"
/**
 * flip_bits - det no of bits to flip to get to
 * next no
 * @n: number 1
 * @m: number 2
 * Return: bit diff
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_d = 0;
	unsigned long int diff;

	diff = n ^ m;

	for (; diff > 0; diff >>= 1)
		bit_d += diff & 1;

	return (bit_d);
}
