#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for c lang
 *
 * Description:  returns positive if the number is grater than zero,
 * returns negatove if the number is less than zero
 * else returns zero.
 * Return: Zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
