#include <stdio.h>
/**
 * main - to print program name
 *@argc: number of arguments
 *@argv: array of argument
 *
 *Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int argucount = argc - 1;

	printf("%d\n", argucount);
	return (0);
}
