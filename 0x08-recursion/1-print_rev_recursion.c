#include "main.h"
/**
 * _print_rev_recursion - To print a string in reverse
 * @s: pionter variable for string
 * Reyurn: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
