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
	va_list sn;
	unsigned int j;

	va_start(sn, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(sn, int));
	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(sn);
}
