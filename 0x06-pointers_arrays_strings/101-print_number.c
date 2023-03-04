#include "main.h"
/**
 * print_number - To print an integer
 * @n: input values
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		_putchar('_');
		num = -n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

