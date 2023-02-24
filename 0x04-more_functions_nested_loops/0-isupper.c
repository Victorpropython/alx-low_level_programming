#include "main.h"
/**
 * _isupper - to show that it is an upper case letter
 * @c: used as the variable
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
