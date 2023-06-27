#include "main.h"
#include <unistd.h>
/**
 *putchar - To print to stdout
 *@c: variable used for char
 *
 *Return: Always (0) success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
