#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * *_memset - To print a constant buffer
 * @s: input varible for pionter
 * @b: input varible
 * @n : input variable
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n); 
}
