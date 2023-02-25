#include "main.h"
/**
 *more_numbers - To  print 10 times from one to fourteen
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int i, c,  j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 14; j++)
		{
			If (j > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
	}
	_putchar('\n');
}
