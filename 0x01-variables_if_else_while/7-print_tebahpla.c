#include <stdio.h>

/**
 * main - Entry point.
 *
 * Decription: Print a-z in reverse order
 * Return:  Zero
*/

int main(void)
{
int num = 122;
while (num > 96)
{
putchar(num);
--num;
}
putchar('\n');
return (0);
}
