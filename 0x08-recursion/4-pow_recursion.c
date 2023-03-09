#include "main.h"
/**
 * _pow_recursion - To  multipy to the power of an integer
 * @x: USed as variable
 * @y: Used as a variable
 * Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
