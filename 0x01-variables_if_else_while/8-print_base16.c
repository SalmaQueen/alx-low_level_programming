#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Print all the number in lowercase in base 16.
 * Return: Zero
*/

int main(void)
{
int num = 48;
int alb = 'a';
while (num <= 57)
{
putchar(num);
++num;
}
while (alb <= 'f')
{
putchar(alb);
++alb;
}
putchar('\n');
return (0);
}
