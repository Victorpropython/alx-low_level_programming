#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: the first string
 * @s2: second string to be compared to s1
 *
 * Return: always 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int m = 0;

	while (s1[m] != '\0' || s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			if (s2[m] > s1[m])
				return (s1[m] - s2[m]);
			else if (s1[m] > s2[m])
				return (s1[m] - s2[m]);
		}
		m++;
	}
	return (0);
}
