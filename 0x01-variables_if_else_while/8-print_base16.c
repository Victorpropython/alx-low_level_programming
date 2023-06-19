#include <stdio.h>
/**
 * main - Entry point
 * Return: a to z
 */
int main(void)
{
	char alpha;
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
