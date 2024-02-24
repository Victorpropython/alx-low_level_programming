#include "main.h"

/**
 * string_nconcat - a function that concanates two strings
 *
 * @s1: first string to join
 * @s2: second string to join
 * @n: number of s2 bytes to be joined
 *
 * Return: pointer to joined string and NULL (fail)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int m, k = 0, s1len = 0, s2len = 0;
	char *str;

	while (s1 && s1[s1len])
		s1len++;
	while (s2 && s2[s2len])
		s2len++;
	if (n < s2len)
		str = malloc(sizeof(char) * (s1len + n + 1));
	else
		str = malloc(sizeof(char) * (s1len + s2len + 1));

	if (!str)
		return (NULL);
	for (m = 0 ; m < s1len ; m++)
	{
		str[m] = s1[m];
	}

	while (n < s2len && m < (s1len + n))
	{
		str[m++] = s2[k++];
	}
	while (n >= s2len && m < (s1len + s2len))
		str[m++] = s2[k++];

	str[m] = '\0';

	return (str);
}
