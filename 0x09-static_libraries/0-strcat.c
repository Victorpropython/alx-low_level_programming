#include "main.h"
/**
 **_strcat - To concatenate two string
 *@dest: use as pointer variable for string 1
 *@src: pointer variable for string
 *
 *Return: to return concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	char *ans = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ans);

}
