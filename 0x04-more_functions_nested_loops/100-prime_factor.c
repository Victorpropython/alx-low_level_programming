#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * main - To print the largest prime factors of numbers
 * Return: Always 0
 */
int main(void)
{
	long x, max_num;
	long number = 612852475143;
	double square = sqrt(number)

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	max_num = number / x;
	}
	}
	printf("%d\n", max_num);
	return (0);
}

