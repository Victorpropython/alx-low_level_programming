#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - to print first natural numbers
 *@n: use as variable for natural numbers
 * Return: Always 0 suvvess
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
