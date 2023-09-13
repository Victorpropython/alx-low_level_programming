#include "main.h"
/**
 *_putchar - To print a character
 *c: variable for character
 *
 *Return: 1, 0 , -1
 */
int _putchar(char c)
{
	return ( write(1, &c, -1));
}
