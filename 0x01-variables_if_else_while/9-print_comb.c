#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - to print numbers in ascending order
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar((i % 10) + '0');
	if (i == 9)
	continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
