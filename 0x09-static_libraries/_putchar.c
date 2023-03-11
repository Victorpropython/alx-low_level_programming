#include "main.h"
#include <unistd.h>
/**
 * _putchar - To print out a character
 * @c: variable for character
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
