#include "main.h"
/**
 * _strlen_recursion -To print the length of a string
 * @s: Pionter variable
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
