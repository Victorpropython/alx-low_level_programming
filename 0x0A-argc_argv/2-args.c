#include <stdio.h>
/**
 * main - To print all argument given to it
 * @argc: used as argument count
 * @argv: used for array of size argc
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 1)
	{
		for ( ; i < argc; i++)
			printf("%s\n", *argv++);
	}
	return (0);
}

