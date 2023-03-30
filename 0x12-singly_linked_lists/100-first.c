#include <stdio.h>

/**
* _main - function execute before the main
*
* Return: Always 0
*/

void __attribute__ ((constructor)) _main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
