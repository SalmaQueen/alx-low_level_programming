#include "function_pointers.h"
#include "3-calc.h"

/**
* main - check the code for Alx student
* @argc: argument counter
* @argv: argument vector
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
char *sign;
char operator;
int a, b;
int (*operation)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
operator = argv[2][0];
if ((operator != '*' && operator != '+' && operator != '-' && operator != '/'
&& operator != '%') || argv[2][1] != '\0')
{
	printf("Error\n");
	exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if ((operator == '/' || operator == '%') && b == 0)
{
	printf("Error\n");
	exit(100);
}
sign = argv[2];
operation = get_op_func(sign);
printf("%d\n", operation(a, b));
return (0);
}
