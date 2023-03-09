#include "main.h"
/**
 * factorial - To determine the factorial of a number
 * @n: use as input variable
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
	}
	return (n * (factorial(n - 1)));
}

