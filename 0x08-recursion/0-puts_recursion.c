#include "main.h"
/**
 *_puts_recursion - To print a string
 *@s: pointer variable
 *
 *Return: Always 0 (success)
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
