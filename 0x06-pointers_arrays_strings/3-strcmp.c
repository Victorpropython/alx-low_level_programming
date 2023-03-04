#include "main.h"
/**
 * _strcmp - To compare two string
 * @s1: input value
 * @s2: input value
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	if (s1 < s2)
		return (-1);
	if (s1 > s2)
		return (1);
}
