#include "main.h"

/**
 * _putchar - to print a single char
 * @c: Variable to print char
 * Return: 1, 0r -1 if any error
 **/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

