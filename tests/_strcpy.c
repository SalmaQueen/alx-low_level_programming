#include "main.h"

/**
* *_strcpy - copy the string pointed to by src including the terminating
* null byte to the buffer pointed to by dest
* @dest: value to check
* @src: value to check
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
