#include "main.h"

/**
* _islower - Check for lower.
* @c: returns 1 if lower.
* Return: 0.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
