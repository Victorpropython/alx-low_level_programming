#include "main.h"
/**
 *times_table - to print the times table
 *
 * Return: always zero
 */
void times_table(void)
{
	int j = n * t , i, g;

	for (j = 0; j <= 9; j++)
	{
		while (t < 9)
		{
			_putchar((j / 10) + '0');
