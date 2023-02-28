#include "main.h"
#include <stdio.h>

/**
 * int _strlen - To return the lenght of a string
 * @s: Used as variable to get lenght
 * Return: Always 0
 */
int _strlen(char *s)
{
	size_t lenght = 0;

	while (*s++)
		lenght++;
	return (lenght);
}

