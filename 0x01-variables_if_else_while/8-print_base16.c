#include <stdio.h>
/**
 * main - Entry point
 * Return: a to z
 */
int main(void)
{
	char low_alpha;
	int upper;

	for (low_alpha = 'a'; low_alpha <= 'f'; low_alpha++)
	{
		putchar(low_alpha);
	}
	for (upper = '0'; upper <= '9'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
