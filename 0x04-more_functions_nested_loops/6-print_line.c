#include "main.h"
/**
 * print_line- To draw a straight line
 * @n: used as variable
 * Return: \n
 */
void print_line(int n)
{
	for (n = 0; n <= 50; n++)
	{
		_putchar('-');

		if (n <= 0)
			_putchar ('\n');
	}
}
