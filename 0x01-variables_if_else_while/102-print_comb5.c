#include <stdio.h>

/**
 * main -  To print two two digit possible combinations
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int chi, vic;

	for (chi = 0; chi <= 98; chi++)
	{
		for (vic = chi + 1; vic <= 99; vic++)
		{
			putchar((chi / 10) + '0');
			putchar((chi % 10) + '0');
			putchar(' ');
			putchar((vic / 10) + '0');
			putchar((vic % 10) + '0');

			if (chi == 98 && vic == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}putchar('\n');
		return (0);
}
