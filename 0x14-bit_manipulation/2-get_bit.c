#include "main.h"

/**
 * get_bit - get bit at nth index
 * @n: binary number
 * @index: nth position
 *
 * Return: bit at that position
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int k = 1 << index;

	if (index >= sizeof(n) * 8)
		return (-1);
	else if ((n & k) >= 1)
		return (1);
	else
		return (0);
}
