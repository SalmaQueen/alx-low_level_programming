#include "3-calc.h"

/**
* op_add - adds two numbers
* @a: first value to check
* @b: second vaue to check
*
* Return: Result
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtract two numbers
* @a: first value to check
* @b: second vaue to check
*
* Return: Result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_div - divide two numbers
* @a: first value to check
* @b: second value to check
*
* Return: result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - calculate the modulus pf two numbers
* @a: first value to check
* @b: second value to check
*
* Return: Result
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
* op_mul - multiple two numbers
* @a: first value to check
* @b: second value to check
*
* Return: Result
*/

int op_mul(int a, int b)
{
	return (a * b);
}
