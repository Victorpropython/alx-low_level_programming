#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *Return: Always 0 (success)
*/
int main(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}