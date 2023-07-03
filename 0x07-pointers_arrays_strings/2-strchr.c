#include "main.h"
/**
 **_strchr - function that locates a character in a string
 *@s: string variable
 *@c: charcter to locate
 *
 *Return: to return a character or exit at Null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
