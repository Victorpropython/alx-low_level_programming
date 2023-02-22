#include "main.h"
/**
 *_isalpha -  To check for alphabets
 * @c: Used as variable for checker
 *
 * Return: Always 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' && c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
