#include <stdio.h>
/**
 * main - Entry point
 * Return: a to z
 */
int main(void)
{
	char low_alpha;
	char upper;

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		putchar(low_alpha);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
