#include "main.h"
/**
 * *_strpbrk - To search for a string for any of the set byte of character
 * @s: initail segement
 * @accept: to accept the byte
 * Return: Always success
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	for ( ; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (&(*(s + i)));
			}
		}
	}
	return ('\0');
}
