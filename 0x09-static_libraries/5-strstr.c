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

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
