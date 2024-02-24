#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: array of program arguments
 *
 * Return: pointer to allocate memory and 98 (fail)
 */

void *malloc_checked(unsigned int b)
{
	void *malloc_ptr;

	malloc_ptr = malloc(b);

	if (malloc_ptr == NULL)
		exit(98);

	return (malloc_ptr);

}
