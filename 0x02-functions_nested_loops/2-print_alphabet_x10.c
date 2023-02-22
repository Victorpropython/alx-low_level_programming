#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet 10 times
 *
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 26;)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
