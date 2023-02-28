#include <stdio.h>
/**
 * _putchar - To print out a single cahracter
 *
 * @c: used as the variable
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
