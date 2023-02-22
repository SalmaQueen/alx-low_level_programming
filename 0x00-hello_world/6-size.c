#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:  Write a C program that prints the size of various
 * types of on the computer it is compiled and run on computer
 * Return: Zero for success and or value for failure
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
}
