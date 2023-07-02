#include "main.h"
/**
 * print_array -  function that prints n elements of an array of 
 * integers, followed by a new line
 * @a: used as pointer variable
 * @n: number of element of array to be printed
 *
 * Return: To print n number of array
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0')
		i++;
	n = 0;
	for (; a[n] != '\0'; n++)
	{
		printf("%d", a[n]);
		printf(",");
		printf(" ");
	}
	printf("\n");
}
