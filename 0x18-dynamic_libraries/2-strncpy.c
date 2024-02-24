#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: first string to be copied
 * @src: second string to be copied
 * @n: number of characters to be copied to dest from src
 *
 * Return: pointer dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);

}
