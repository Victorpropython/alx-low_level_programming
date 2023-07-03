#include "main.h"
/**
 *_putchar - To print out letters
 *@c: variable used to print out
 *
 *Return: Return 1 on success or -1 if any error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
