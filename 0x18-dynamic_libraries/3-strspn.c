#include "main.h"

/**
 * _strspn - a function that gets length of a prefix string
 *
 * @s: string s
 * @accept: the prefix string
 *
 * Return: number of bytes of initial segment of s from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;

	while (*s)
	{
		int j = 0;

		while (accept[j])
		{
			if (*s == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (k);
			j++;
		}
		s++;
	}
	return (k);
}
