#include <stdio.h>
/**
 *main - Write a program that prints all arguments it receives.
 *@argc: used for argument count
 *@argv: FOr argument array
 *
 *Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
