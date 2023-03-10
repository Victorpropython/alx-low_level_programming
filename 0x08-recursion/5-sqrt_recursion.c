#include "main.h"
int is_sqrt(int n, int i);
/**
 * _sqrt_recursion - To print the square root of a umber
 * @n: integer variable
 * Return: Always success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (is_sqrt(n, 0));
}
/**
 * is_sqrt - The actual sqrt calculation
 * @i: used as iterator
 * @n: input value
 * Return: value
 */
int is_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (is_sqrt(n, i + 1));
}
