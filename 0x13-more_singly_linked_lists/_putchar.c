
#include "lists.h"
/**
 *_putchar - To print a character
 *@c: Character variable
 *
 *Return: To return 1 on Success or -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
