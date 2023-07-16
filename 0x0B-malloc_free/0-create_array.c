#include "main.h"
/**
 **create_array - a function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: the size of array
 *@c: the character variable
 *
 *Return: Always 0 success
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc((size + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
