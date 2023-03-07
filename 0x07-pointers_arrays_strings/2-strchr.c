#include "main.h"
/**
 * *_strchr - To print a character in a string
 * @s: used as pionter variable
 * @c: used as char variable
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
