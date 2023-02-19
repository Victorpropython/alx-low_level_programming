#include <stdio.h>
#include <stdlib.h>
/**
 * main - To print two digit of two numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{

		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
