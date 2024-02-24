#include "main.h"

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: main string
 * @needle: substring
 *
 * Return: pointer substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *s = haystack;
		char *substr = needle;

		while (*s == *substr && *substr != '\0')
		{
			s++;
			substr++;
		}
		if (*substr == '\0')
			return (haystack);

	haystack++;
	}
	return (NULL);
}
