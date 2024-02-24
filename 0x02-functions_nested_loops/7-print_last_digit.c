#include "main.h"

/**
 * print_last_digit - a function that prints last digit of a number
 *
 * @n: a parameter for the function
 *
 * Return: r - last digit of n
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
