#include "main.h"
/**
 **_strstr - a function that locates a substring.
 *@haystack: pointer variable of string
 *@needle: substring
 *
 *Return: To return a pointer to the begining of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int m = 0;

	while (needle[m] != '\0')
		m++;
	
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		if (i != m)
		{
			haystack++;
		}
		else
			return (haystack);
		}
	}
	return (NULL);
}
