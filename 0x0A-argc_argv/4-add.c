#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  a program that adds positive numbers.
 *@argc: for argument count
 *@argv: for array of argument
 *
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int sum, i, j, num;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
