#include <stdio.h>

/**
* main - print the first 50 Fibonnacci number starting with 1 and 2
*
* Return: Always 0
*/

int main(void)
{
	long int n1, n2, fn;
	int c;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn =  n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
