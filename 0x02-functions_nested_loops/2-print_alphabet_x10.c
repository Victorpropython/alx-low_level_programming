#include "main.h"
/**
 * print_alphabet_x10 - To print alphabet in lowercase 10 times
 * Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	for ( ; i < 10; i++)
	{
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
	}
	_putchar('\n');
}
