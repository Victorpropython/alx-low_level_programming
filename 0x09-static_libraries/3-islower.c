#include "main.h"

/**
 * _islower - To check for lower case
 *@c: to return 1 or 0
 * Return: Always c if lowercase, c if  non
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
