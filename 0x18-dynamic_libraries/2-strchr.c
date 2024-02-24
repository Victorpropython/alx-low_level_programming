#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: the string to check for characters
 * @c: the character to be checked
 *
 * Return: pointer for first occurance of c or NULL otherwise
 *
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0 ; s[n] >= '\0' ; n++)
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
	}
	return (NULL);
}

