#include "main.h"
/**
 *print_number- To print out digits
 *Return: Always 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)

		_putchar((c % 10) + '0');

	_putchar('\n');
}
