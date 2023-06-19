#include <stdio.h>
/**
 * main - Entry point
 * Return: a to z
 */
int main(void)
{
	char low_alpha;

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		putchar(low_alpha);
		putchar('\n');
	}
	return (0);
}
