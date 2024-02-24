#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination for n bytes to be copied
 * @src: source for n bytes to be copied from
 * @n: number of bytes to be copied
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
