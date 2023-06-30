#include "main.h"
/**
 *reverse_array - Function that reverse content in an array
 *@a: Int variable
 *@n: Number for array size
 *
 *Return: Always (0) Success
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int t;

	for (i = 0; a[i] != '\0'; i++)
		;
	for ( ; j > 1; j--)
	{
		t = a[j];
		a[j] = a[i];
		a[i] = t;
	}
}
