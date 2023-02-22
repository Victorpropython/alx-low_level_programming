#include "main.h"
/**
 *times_table - to print the times table
 *
 * Return: always zero
 */
void times_table(void)
{
	int b, n, t;

	for (n = 0; n <= 12; n++)
	{
		for (t = 0; t <= 9; ++t)
		{
			b = n * t;
			_putchar(b);
			_putchar('\n');
		}
	}
}
