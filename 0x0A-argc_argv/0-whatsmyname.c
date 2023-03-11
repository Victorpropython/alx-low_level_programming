#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - To print program name of its self
 * @argc: argument count
 * @argv: arry of argc
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s \n", *argv++);
		exit (EXIT_SUCCESS);
	}
	return (0);
}

