#include "main.h"

/**
 * _strncat - a function to join two strings
 *
 * @dest: first string to be joined
 * @src: second string to be joined
 * @n: bytes from src to be joined to dest
 *
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int m;

	while (dest[dest_length] != '\0')
		dest_length++;
	for (m = 0 ; m < n && *src != '\0' ; m++)
	{
		dest[dest_length + m] = *src;
		src++;
	}
	dest[dest_length + m] = '\0';
	return (dest);
}
