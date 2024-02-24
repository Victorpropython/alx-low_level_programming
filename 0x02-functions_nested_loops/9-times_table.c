#include "main.h"

/**
 * times_table -a function that prints the 9 times table from 0
 *
 * Return: void
 */

void times_table(void)
{
	int x, y, z, i, j;

	for (x = 0 ; x < 10 ; x++)
	{
		for (y = 0 ; y < 10 ; y++)
		{
			z = x * y;
			if (z > 9)
			{
				i = z % 10;
				j = ((z - i) / 10);
				_putchar(',');
				_putchar(' ');
				_putchar(j + '0');
				_putchar(i + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			_putchar(z + '0');
			}
		}
	_putchar('\n');
	}
}
