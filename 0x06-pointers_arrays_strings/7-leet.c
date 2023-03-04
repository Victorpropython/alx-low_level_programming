#include "main.h"
/**
 * *leet - To encode a string int 1337
 * @enc: used of variable for encoded array
 * Return: Always 0
 */
char *leet(char *enc)
{
	int i, s;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; enc[i] != '\0'; i++)
	{
		for (s = 0; s < 10; s++)
		{
			if (enc[i] == s1[s])
			{
				enc[i] = s2[s];
			}
		}
	}
	return (enc);
}

