#include <stdio.h>
/**
 * _putchar - To write out a string
 * @c: used as the variable to  print the string
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
