#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: used as pointer variable
 * @n: length of the string - 1
 *
 * Return: To return str.
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
		i++;
	
	n = i / 2;

	if (i % 2 == 1)
		n++;
	while (n < i)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
