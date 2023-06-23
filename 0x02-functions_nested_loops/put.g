#include "main.h"
#include <unistd.h>

/**
 * _putchar - To print out character
 * @b: the character to print
 * Return: Always 1
 * on error, Returns - 1 and errno is set in order
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}
