#include "main.h"
/**
 * puts2 - To print every other of string character starting with a new line
 * @str: used as pionter variable
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j;  i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
