#include "main.h"

/**
 * *string_toupper - To print all string lowercase to uppercase
 * @u: used as variable
 * Return: Always 0
 */
char *string_toupper(char *u)
{
	int i;

	i = 0;
	{
	while (u[i] != '\0')
	{
	if (u[i] >= 'a' && u[i] <= 'z')
	u[i] = u[i] - 32;
	i++;
	}
	}
	return (u);
}
