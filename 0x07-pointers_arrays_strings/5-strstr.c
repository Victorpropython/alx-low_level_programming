#include "main.h"
/**
 * *_strstr - To locate a substring
 * @haystack: pointer variable
 * @needle: pointer variable
 * Return: Always haystack
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *num1 = haystack;
		char *num2 = needle;
		while (*num1 == *num2 && *num2 != '\0')
		{
			num1++;
			num2++;
		}
		if (*num2 == '\0')
			return (haystack);
	}
	return ('\0');
}
