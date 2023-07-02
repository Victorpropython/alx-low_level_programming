#include "main.h"
/**
 *_putchar- To print a character
 *@c: char variable used to print the character
 *
 *Return: will return 1 on success or -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
