#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: pointer for variable b
 * @b: constant byte character
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	while (n > 0)
	{
		s[k] = b;
		n--;
		k++;
	}
	return (s);
}
