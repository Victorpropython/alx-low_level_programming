#include "main.h"
/**
 * *_memset - To print a constant buffer
 * @s: input varible for pionter
 * @b: input varible
 * @n : input variable
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = n; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
