#include "main.h"

/**
 * _puts_recursion - To print a string
 *@s: pointer variable
 *
 *Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		_putchar('\n');
		return(0);
	}
	_putchar('\n');
	_puts_recursion(s + 1);
}
