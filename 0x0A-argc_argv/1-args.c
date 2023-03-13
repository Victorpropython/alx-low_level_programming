#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Tp print argument count
 * @argc: used for argument count
 * @argv; used for array of sisze argc
 * Return: always 0
 */
int _main(int argc)
{
	int i;


	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
	
			printf("%d\n", i);
	}
	return (0);
}
