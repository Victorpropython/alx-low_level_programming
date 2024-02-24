#include "main.h"

/**
 * _abs - a functions that computes the absolute value of an integer
 *
 * @n: parameter to be checked
 *
 * Return: always a positive n
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

