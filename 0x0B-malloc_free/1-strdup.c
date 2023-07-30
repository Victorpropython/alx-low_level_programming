#include "main.h"
/**
 *_strdup - function returns a pointer to a new string which is a
 *duplicate of the string
 *@str: pointer to a new string
 *
 *Return: string duplicate
 */
char *_strdup(char *str)
{
	int i, tmp;
	char *dup;

	if (str == NULL)
	{
		return ('\0');
	}
	for (i = 0; str[i] != '\0'; i++)
		tmp++;
	{
		dup = malloc(sizeof(char) * (tmp + 1));
	}
	if (dup == NULL)
		return ('\0');
	for (i = 0; str[i]; i++)
	{
		dup[i] = str[i];
	}
	dup[tmp] = '\0';
	return (dup);
}
