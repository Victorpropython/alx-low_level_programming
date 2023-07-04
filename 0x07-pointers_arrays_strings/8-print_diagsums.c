#include "main.h"
/**
 *print_diagsums - a function that prints the sum of the two
 *diagonals of a square matrix of integers.
 *@a: integer pointer to array
 *@size: Array size
 *
 *Return: To return nothing
 */
void print_diagsums(int *a, int size)
{
	int m;
	int nsum1 = 0;
	int nsum2 = 0;

	for (m = 0; m < size; m++)
	{
		nsum1 = nsum1 + a[m];
		a = a + size;
	}
	a = a - size;

	for (m = 0; m < size; m++)
	{
		nsum2 = nsum2 + a[m];
		a = a - size;
	}
	printf("%d, %d\n", nsum1, nsum2);
}
