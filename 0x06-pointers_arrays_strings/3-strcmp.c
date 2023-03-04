#include "main.h"
/**
 * _strcmp - To compare two string
 * @s1: input value
 * @s2: input value
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, st = 0;

	while (st == 0)
	{
		if (*(s1[i] == '\0') && *(s2[i] == '\0'))
			break;
		st = *(s1[i]) - *(s2[i]);
		i++;
	}
	return (st);
}


