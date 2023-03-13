#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Tp print argument count
 * @argc: used for argument count
 * @argv; used for array of sisze argc
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d \n", argc - 1);
	return (0);
}
