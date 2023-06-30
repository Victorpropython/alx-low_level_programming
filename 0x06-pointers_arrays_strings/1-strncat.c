#include "main.h"
/**
 **_strncat - To concatenate string using n variable
 *@dest: string variable 1
 *@src: string variable 2
 *@n: the int variable
 *
 *Return: To return concatenated string 
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ans = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (ans);
}
