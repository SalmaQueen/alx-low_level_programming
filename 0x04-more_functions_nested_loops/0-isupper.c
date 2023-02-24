#include "main.h"

/**
* _isupper - checks for upper case characters
* @c: inout value to check for.
* Return: int 1 for C or 0 otherwise.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
