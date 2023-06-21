#include "main.h"
/**
 * print_alphabet_x10 - To print alphabet in lowercase 10 times
 * Return: Always 0 (success)
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char alpha = 'a';

	while (i < 10)
	{
		for (; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
			alpha++;
		}
	}
	_putchar('\n');
}
