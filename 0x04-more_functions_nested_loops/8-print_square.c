#include "main.h"
/**
 * print_square- To print a square line
 * @size: used as a variable
 * Return: void
 */
void print_square(int size)
{
	int c, s;

	if (size > 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (s = 0; s < size; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
