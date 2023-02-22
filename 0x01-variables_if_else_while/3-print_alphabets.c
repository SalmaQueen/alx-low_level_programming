#include <stdio.h>

/**
 * main - Entry poin.
 *
 * Description: prints a-zA-z in both case
 * Return: Zero.
*/

int main(void)
{
int lc = 'a';
int uc = 'A';
while (lc <= 'z')
{
putchar(lc);
lc += 1;
}
while (uc <= 'Z')
{
putchar(uc);
uc += 1;
}
putchar('\n');
return (0);
}
