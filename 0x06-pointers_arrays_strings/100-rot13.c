#include "main.h"
/**
 * *rot13 - To encode the letter rot13
 * @enc: used as array
 * Return: Always 0
 */
char *rot13(char *enc)
{
	int i, j;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWUXYZABCDEFGHIJKLMnopqrstuvwxyzabcdifghijklm";

	for (i = 0; enc[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (enc[i] == s[j])
			{
				enc[i] = s1[j];
			}
		}
	}
	return (enc);
}
