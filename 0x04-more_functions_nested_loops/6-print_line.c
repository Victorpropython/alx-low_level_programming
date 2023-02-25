#include "main.h"
/**
 * print_line- To draw a straight line
 * @n: used as variable
 * Return: \n
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
			_putchar('_');
	}
	_putchar ('\n');
}
