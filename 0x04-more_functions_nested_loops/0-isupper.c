#include "main.h"
/**
 * _isupper: to check for upper case character
 * @c: Variable use in checking the upper case characters
 * Return: To return 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	else
		return (0);
	}
}
