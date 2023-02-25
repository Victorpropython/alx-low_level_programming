#include "main.h"
/**
 * print_diagonal - To print diagonally
 * @n: used as variable
 * Return: \n
 */
void print_diagonal(int n)
{
	int c, s;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (c = 0; c < n; c++)
	{
	for (s = 0; s < c; s++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}

