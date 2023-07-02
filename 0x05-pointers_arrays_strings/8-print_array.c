#include "main.h"
/**
 * print_array - function that prints n elements of an array of
 * integers, followed by a new line
 * @a: used as pointer variable
 * @n: number of element of array to be printed
 *
 * Return: To print n number of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
