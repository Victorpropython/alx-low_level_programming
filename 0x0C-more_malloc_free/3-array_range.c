#include "main.h"


/**
 * array_range - a function that creates an array of integers
 *
 * @min: array of minimum values
 * @max: array of maximum values
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *min_max;
	int m, arr_size;

	if (min > max)
		return (NULL);

	arr_size = max - min + 1;

	min_max = malloc(sizeof(int) * arr_size);

	if (min_max == NULL)
		return (NULL);

	m = 0;
	while (min <= max)
	{
		min_max[m] = min++;
		m++;
	}
	return (min_max);
}
