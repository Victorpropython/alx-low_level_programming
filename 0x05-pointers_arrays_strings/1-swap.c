#include "main.h"
/**
 *swap_int - To swap integers of two numbers
 *@a: interger variable
 *@b: Second integer variable
 *
 *Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
