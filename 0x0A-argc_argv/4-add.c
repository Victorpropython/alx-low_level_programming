#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  a program that adds positive numbers.
 *@argc: for argument count
 *@argv: for array of argument
 *if the character is not a digit, it print "Error" & return 1.
 *if the character is a digit, the prgram adds the number to the sum
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
