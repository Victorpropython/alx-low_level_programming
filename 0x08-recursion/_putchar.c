#include "main.h"
/**
 *_putchar - To print a character
 *@c: Variable used to print out
 *
 *Return: To return (0) success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
