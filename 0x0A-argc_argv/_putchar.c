#include "main,h"
#include <unistd.h>
/**
 * _putchar- To print out a character
 * @c: used as string variable
 * Return: Always )
 */
int  _putchar(char c)
{
	return (write(1, &c, 1));
}
