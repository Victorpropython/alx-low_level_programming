#include "main.h"
/**
 **rot13 - Function to encode a string using rot13
 *@str: Pointer variable
 *
 *Return: To return encoded variable
 */
char *rot13(char *str)
{
	char alpha, *ptr = str;

	while (*str)
	{
		alpha = (*str & 32) + 65;
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
			*str = (*str - alpha + 13) % 26 + alpha;
		str++;
	}
	return (ptr);
}
