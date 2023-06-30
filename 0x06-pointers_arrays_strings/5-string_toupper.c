#include "main.h"
/**
 **string_toupper - To change all lowercase of string to upper
 *@strg: Used for pionter variable
 *
 *Return: Always (0) success
 */
char *string_toupper(char *strg)
{
	int i;

	for (i = 0; strg[i] != '\0'; i++)
	{
		if (strg[i] >= 'a' && strg[i] <= 'z')
		{
			strg[i] = strg[i] - 32;
		}
	}
	return (strg);
}
