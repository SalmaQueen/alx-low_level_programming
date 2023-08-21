#include "main.h"

/**
* _isalpha - check if c is letter, lower or upper
* @c: what to check for..
* Return: 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
