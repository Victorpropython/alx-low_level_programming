#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program to multiply two numbers and print it out
 *@argc: argument count
 *@argv: Array of argument
 *
 *Return: Alwyas 0 success
 */
int main(int argc, char *argv[])
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	ans = num1 * num2;
	printf("%d\n", ans);

	return (0);
}
