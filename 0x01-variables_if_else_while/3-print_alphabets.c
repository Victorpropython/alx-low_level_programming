#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry piont
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);

	putchar('\n');

	return (0);
}
