#include "main.h"

/**
 * _strlen -a function that returns string length
 *
 * @s: the string to be counted
 *
 * Return: string count of s
 */

int _strlen(char *s)
{
	int stringCount = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		stringCount++;
	return (stringCount);
}
