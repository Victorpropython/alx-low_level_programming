#include "main.h"
/**
 *_strspn - a function that gets the length of a prefix substring.
 *@s: memory source
 *@accept: number of bytes
 *
 *Return: To return the number of bytes from accepts
 */
unsigned int _strspn(char *s, char *accept)
{
	int m, n;
	int i = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] != 32)
		{
			for (n = 0; accept[n] != '\0'; n++)
			{
				if (s[m] == accept[n])
					i++;
			}
		}
		else 
			return (i);

	}
	return (i);
}
