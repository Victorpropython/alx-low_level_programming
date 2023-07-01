#include "main.h"
/**
 **leet - Function to encodes a string into 1337
 *@str: pointer variable
 *
 *Return: To return encoded string
 */
char *leet(char *str)
{
	int v;
	char vchar[] = {'4', '3', '0', '7', '1'};
	char alpha[] = {'a', 'e', 'o', 't', 'l'};
	char *ptr = str;

	while (*str)
	{
		for (v = 0; v < 5; v++)
		{
			if (*str == alpha[v] || *str == alpha[v] - 32)
				*str = vchar[v] + '0';
		}
		str++;
	}
	return (ptr);

}
