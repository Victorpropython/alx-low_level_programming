#include "main.h"
/**
 **_memcpy - a function that copies memory area
 *@dest: destination of memory
 *@src: source for elements
 *@n: n bytes to be copied
 *
 *Return: To return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
