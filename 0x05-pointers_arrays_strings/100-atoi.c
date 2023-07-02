#include "main.h"
/**
 * _atoi - Function to cnvert string to an integer.
 * @s: Pointer to a character string
 *
 * Return: void
 */
int _atoi(char *s)
{
	int c;
	unsigned int num;
	char *tmp;

	tmp = s;
	num = 0;
	c = 1;
	while (*tmp != '\0' && (*tmp < '0' || *tmp > '9'))
	{
		if (*tmp == '-')
			c *= -1;
		tmp++;
	}
	if (*tmp != '\0')
	{
		do {
			num = num * 10 + (*tmp - '0');
			tmp++;
		}while (*tmp >= '0' && *tmp <= '9');
	}
	return (num * c);
}
