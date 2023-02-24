#include <unistd.h>

/**
* _putchar - write the character c to stdout
* @C: The character to print
*
* Return: On succes 1.
* On error, -1 is the returne, and the errno is det appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
