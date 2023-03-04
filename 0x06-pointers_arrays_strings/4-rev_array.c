#include "main.h"
/**
 * reverse_array - To reverse the array of an integer
 * @a: input variable for arr
 * @n: input variable
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

