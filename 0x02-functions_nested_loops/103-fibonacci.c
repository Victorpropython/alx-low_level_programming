#include <stdio.h>

/**
 * main - a program that finds and prints the sum of the even-valued terms
 *  below 4, 000, 000
 *
 *  Return: always 0 (success)
 */

int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int nextNum;
	int sum_even = 2;

	while (nextNum <= limit)
	{
		nextNum = num1 + num2;
		if (nextNum % 2 == 0)
			sum_even = sum_even + nextNum;
		num1 = num2;
		num2 = nextNum;
	}
	printf("%d\n", sum_even);
	return (0);
}`
