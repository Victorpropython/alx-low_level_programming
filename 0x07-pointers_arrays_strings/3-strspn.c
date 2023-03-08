#include "main.h"
/**
 * _strspn - To get the lenght of a prefix substring
 * @s: used as input variable
 * @accept: used as pionter variable
 * Return always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, value, verify;

	value = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		verify = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				value++;
				verify = 1;
			}
		}
		if (verify == 0)
			break;
	}
	return (i);
}

