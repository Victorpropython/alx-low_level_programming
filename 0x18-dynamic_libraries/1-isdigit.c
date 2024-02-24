nclude "main.h"

/**
 * _isdigit - a function that checks for a digit from 0 to 9
 *
 * @c: parameter to be checked
 *
 * Return: 1 (success) and 0 (fail)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
