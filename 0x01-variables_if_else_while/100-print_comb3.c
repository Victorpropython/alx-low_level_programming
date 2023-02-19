#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - to print possible dight combination of two numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');


		if (i != j && i == 8 && j == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}

