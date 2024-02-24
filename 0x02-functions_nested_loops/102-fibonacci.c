#include <stdio.h>

/**
 * main - a function that prints the first 50 Fibonacci numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	int n;
	unsigned long int nextNum;

	printf("%lu, ", num1);

	for (n = 1 ; n < 50 ; n++)
	{
		printf("%lu", num2);
		nextNum = num1 + num2;
		num1 = num2;
		num2 = nextNum;
		if (n != 49)
			printf(", ");
	}

	printf("\n");
	return (0);
}
