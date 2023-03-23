#ifndef _HEADER_
#define _HEADER_
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, unsigned int n, ...);
void print_all(const char * const format, ...);
void print_a_char(char *separator, va_list args);
void print_a_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_char_ptr(char *separator, va_list args);

/**
* struct type - Struct data type
* @op: data type argument
* @f: functioned associated
*/

typedef struct type
{
	char *op;
	void (*f)(char *separator, va_list args);
} type_t;

#endif
