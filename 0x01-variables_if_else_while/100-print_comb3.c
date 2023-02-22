#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits.
 * Return: Zero
*/

int main(void)
{
int num = 48;
int num1;
int comm_num = 44;
while (num <= 57)
{
num1 = num + 1;
while (num1 <= 57)
{
putchar(num);
putchar(num1);
if (num != 56 || num1 != 57)
{
putchar(comm_num);
putchar(32);
}
++num1;
}
++num;
}
putchar('\n');
return (0);
}
