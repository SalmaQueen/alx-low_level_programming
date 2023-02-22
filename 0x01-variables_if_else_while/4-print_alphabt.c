#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: prints a-z without q and e.
 * Return: Zero.
*/

int main(void)
{
int lc = 'a';
while (lc <= 'z')
{
if (lc == 'e' || lc == 'q')
{
lc += 1;
}
else
{
putchar(lc);
lc += 1;
}
}
putchar('\n');
return (0);
}
