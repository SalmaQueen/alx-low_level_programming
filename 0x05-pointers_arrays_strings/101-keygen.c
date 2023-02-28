#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates keygen.
* Return: Always 0.
*/

int main(void)
{
int ran = 0, i = 0;
time_t second;

srand((unsigned int) time(&second));

while (i < 2772)
{
	ran = rand() % 128;
	if ((i + ran) > 2772)
		break;
	i = i + ran;
	printf("%c", ran);
}
printf("%c\n", (2772 - i));
return (0);
}
