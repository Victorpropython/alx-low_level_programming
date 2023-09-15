#include "variadic_functions.h"
/**
 *_putchar - To print single characters
 *@c: char variable used to print a variable
 *
 *Return: Return 1 on success or -! on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
