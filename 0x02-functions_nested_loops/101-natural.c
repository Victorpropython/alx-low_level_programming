#include <stdio.h>

/**
 * main - a function to sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int sum = 0;

	for (n = 0 ; n < 1024 ; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
	return (0);

}
