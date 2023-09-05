#include "main.h"
/**
 **_memset - a function that fills memory with a constant byte
 *@s: pointer variable
 *@b: char variable for constant byte
 *@n: byte for memory area
 *
 *Return: a pointer to the momory areas
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
