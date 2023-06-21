#include "main.h"
/**
 * print_alphabet - To print alphabet in lowercase
 * Return: Always 0 (success)
*/
void print_alphabet(void)
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
