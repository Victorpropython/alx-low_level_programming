#include "main.h"
/**
 *_strpbrk - a function that searches a string for any of a set of bytes
 *@s: occurrence of string
 *@accept: bytes in the string
 *
 *Return: To return NULL or bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
