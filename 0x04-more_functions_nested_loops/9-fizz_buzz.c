#include <stdio.h>

/**
 * main - a program to print numbers from 1 to 100, multiples of 3 print
 * Fizz, multiples of 5 print Buzz and multiples of both 3 and 5 FizzBuzz
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
