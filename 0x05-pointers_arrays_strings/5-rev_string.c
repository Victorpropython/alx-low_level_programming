#include "main.h"
/**
 *rev_string - To rverse a string
 * @*s: use as a  pionter variable
 * @s: used as a normal variable
 * Return: Always 0
 */
void rev_string(char *s)
{
	int n, temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = s[n - 1 - index];
		s[index] = s[n - 1 - index];
		s[index] = temp;
	}
}

