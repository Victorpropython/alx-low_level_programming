#include "main.h"
/**
 * *_strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer
 * pointed to by dest.
 * @dest: destination of copied string
 * @src: source of copied string
 *
 * Return: will return copied string to the buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
