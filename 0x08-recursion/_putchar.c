#include "main.h"
#include <unistd.h>

/**
 * _putchar - To write out a character
 * @c: Variable for char
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
