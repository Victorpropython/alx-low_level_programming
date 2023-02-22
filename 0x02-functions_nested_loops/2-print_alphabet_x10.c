#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet 10 times
 *
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
