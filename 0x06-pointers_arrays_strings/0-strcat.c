#include "main.h"
/**
 * _strcat - to concatenate two string
 * @dest: used as input value
 * @src: used as input value
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while ( dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

