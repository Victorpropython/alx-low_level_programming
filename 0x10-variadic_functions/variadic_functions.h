#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
/**
typedef struct printer_s
{
	char *symbol;
	void (*print)(va_list arg);
} printer_t;
**/
void print_char(va_list arg);
void print_float(va_list arg);
void print_int(va_list arg);
void print_string(va_list arg);


#endif
