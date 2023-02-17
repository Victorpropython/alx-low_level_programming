#include <stdio.h>
#include <stdlib.h>
/**
 *main - A G program that prints that piece of art is useful
 *Return: Always 0 (true)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
