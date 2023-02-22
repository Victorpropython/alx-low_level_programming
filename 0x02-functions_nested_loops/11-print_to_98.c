#include "main.h"

/**
 * print_to_98 - to print first natural numbers
 *
 *
 * Return: Always 0 suvvess
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n < 0)
		{
			printf((n % 10) + '0');
			printf(',');
			printf('\n');
		}
		else
		{	printf(n);
			printf(',');
			printf(' ');
		}
		printf('\n');
	}
}

