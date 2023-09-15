#include "variadic_functions.h"
#include <stdio.h>
/**
 *sum_them_all - a function that returns the sum of all its parameters.
 *@n: intergers to add.
 *
 *Return: To return the sum of arguments given
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sums = 0, i;
	va_list argus;

	if (n == 0)
	{
		return (0);
	}
	va_start(argus, n);
	for (i = 0; i < n; i++)
	{
		sums += va_arg(argus, int);
	}
	va_end(argus);
	return (sums);
}
