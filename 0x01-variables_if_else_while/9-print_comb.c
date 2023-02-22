#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Print all possible combination of single digit number
 * Return: Zero.
*/

int main(void)
{
int num = 48;
int comm_num = 44;
while (num <= 57)
{
putchar(num);
if (num != 57)
{
putchar(comm_num);
putchar(32);
}
++num;
}
putchar('\n');
return (0);
}
