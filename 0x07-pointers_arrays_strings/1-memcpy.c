#include "main.h"
/**
 * *_memcpy - To copy our memory from source to a dest8nation
 * @dest: memory destination
 * @src: memory source
 * @n: number of bytes to be copied
 * Return: Akways success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
