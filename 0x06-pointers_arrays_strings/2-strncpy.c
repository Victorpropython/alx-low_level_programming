#include "main.h"

/**
 * *_strncpy - To copy string 
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	dest = 0;
	while (dest <= 0 && dest != '\0')
	{
		strcpy(dest,src);
	}
	src = 0;
	for (src = n; src < n - 1; src--)
	{
		strcpy(dest,src);
	}
	return (dest);
}
