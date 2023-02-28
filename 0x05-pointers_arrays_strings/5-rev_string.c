#include "main.h"
/**
 *rev_string - To rverse a string
 * @*s: use as a  pionter variable
 * @s: used as a normal variable
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[index++])
	len++;

	for (index = len - 1; index >= len / 2; index++)
	{
		temp = s[index];
		s[index] = s[len - 1];
		s[len - index - 1] = temp;
	}
}

