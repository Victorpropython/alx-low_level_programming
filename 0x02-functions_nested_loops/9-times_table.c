#include "main.h"
/**
 *times_table - to print the times table
 *
 * Return: always zero
 */
void times_table(void)
{
	int b, n, t;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (t = 1; t <= 9; t++)
		{
			_putchar(',');
			_putchar(' ');

			b = n * t;
			if ((b / 10) > 0)
			{
				_putchar((b / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((b % 10) + '0');
			if (t < 9)
			{
				_putchar(',');
				_putchar(' ');
		}
			_putchar('\n');
		}
	}
}
