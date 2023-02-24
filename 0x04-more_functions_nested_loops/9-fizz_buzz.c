#include "main.h"
#include <stdio.h>

/**
* main - program that print from 1 - 100
* Prints Fizz for multiples of 3 and Buzz for multiples of 5
* for multiples og both print FizzBuzz
* Return: Alays 0
*/

int main(void)
{
int num;

num = 1;
printf("%d", num);

for (num = 2; num <= 100; num++)
{
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf(" FizzBuzz");
	}
	else if (num % 3 == 0 && num % 5 != 0)
	{
		printf(" Fizz");
	}
	else if (num % 5 == 0 && num % 3 != 0)
	{
		printf(" Buzz");
	}
	else
	{
		printf(" %d", num);
	}
}
printf("\n");
return (0);
}
