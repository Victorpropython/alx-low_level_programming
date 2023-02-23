#include "main.h"
/**
 *print_times_table - To print times table from 1  to 15
 *
 * Return: Always zero
 */
void print_times_table(int n)
{
	int b. m , j;

	if (n <= 0 && n >= 15)
	{

	for (m = 0; m <= n; m++)
	{ _putchar('0');
		for (j = 1; j <= n; j ++)
		{	_putchar(',');
			_putchar(' ');

			b = m * j;
			if (b <= 99)
				_putchar(' ');
			if (b <= 9)
				_putchar(' ');
			if (b >= 100)
			{
				_putchar((b / 100) + '0');
				_putchar(((b /100) % 10) + '0');
			}
			else (b <= 99 && b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
	}
	_putchar('\n');
	}
}	
