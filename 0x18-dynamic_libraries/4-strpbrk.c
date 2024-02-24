#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: string s for searching
 * @accept: characters to be searched
 *
 * Return: match string s or null
 *
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s)
	{
		int n = 0;

		while (accept[n])
		{
			if (*s == accept[n])
			return (s);
		n++;
		}
	s++;
	}
	return (NULL);
}
