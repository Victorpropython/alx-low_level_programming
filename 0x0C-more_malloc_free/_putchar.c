#include "main.h"
/**
 *_putchar - To print a single character
 *@c: variable used for character
 *
 *Return: To return 1 on Success or -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
