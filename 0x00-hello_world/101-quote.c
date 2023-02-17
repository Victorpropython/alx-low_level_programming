#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *main - A G program that prints that piece of art is useful
 *Return: Always 0 (true)
 */
int main(void)
{
	write(1, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
