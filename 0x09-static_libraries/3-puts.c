#include "main.h"
/**
 * _puts - To print out a string followed by a new lim=ne
 * @str: used a a variable for the string
 * Return: Always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
