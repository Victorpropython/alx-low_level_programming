#include "main.h"
#include <unistd.h>
/**
 *_putchar - To print a single character
 * @c: used as a variable
 * Return: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
