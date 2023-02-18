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
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');
	return (0);
}
