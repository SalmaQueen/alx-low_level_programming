#include "main.h"

/**
* _isdigit - checks for digit from 0 - 9.
* @c: value to check for.
* Return: Returns 1 if c is digit or o otherwise.
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
