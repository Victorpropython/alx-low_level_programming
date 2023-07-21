#include "variadic_functions.h"
/**
 *print_numbers - function that prints numbers
 *@separator: is the string to be printed between numbers
 *@n: is the number of integers passed to the function
 *
 *Return: To return numbers of integers or null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
	{
		return;
	}

