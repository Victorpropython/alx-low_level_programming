#include "main.h"

/**
 * _islower - a function to check lowercase character
 *
 * @c: parameter to be checked
 *
 * Return: 1 when character is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
