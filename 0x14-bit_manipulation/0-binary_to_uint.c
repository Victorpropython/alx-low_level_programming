#include <stdio.h>
#include <string.h>
#include "main.h"
#include <math.h>

/**
 * binary_to_uint - converts binary to uint
 * @b: pointer to the character array in binary to be converted
 *
 * Return: converted number if successful, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, i, base = 1;

	if (b == NULL)
		return (0);
	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		if (b[i] == '1')
			result += base;
		base *= 2;
	}
	return (result);
}
