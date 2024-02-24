#include "main.h"

/**
 * _strcat - a function to join two strings
 *
 * @dest: the first string to be joined
 * @src: the second string to be appended
 *
 * Return: pointer from string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int src_length = 0;

	int m = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	for (m = 0 ; m <= src_length ; m++)
		dest[dest_length + m] = src[m];
	return (dest);

}
