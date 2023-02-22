#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: Prints all possible combinations of two two-digit numbers.
 * Return: Zero
*/

int main(void)
{
int num1 = 48;
int num2 = 0;
int num3;
int comm_num = 44;
while (num2 <= 99)
{
num3 = num2 + 1;
while (num3 <= 99)
{
putchar((num2 / 10) + num1);
putchar((num2 % 10) + num1);
putchar(32);
putchar((num3 / 10) + num1);
putchar((num3 % 10) + num1);
if (num2 != 98 || num3 != 99)
{
putchar(comm_num);
putchar(32);
}
++num3;
}
++num2;
}
putchar('\n');
return (0);
}
