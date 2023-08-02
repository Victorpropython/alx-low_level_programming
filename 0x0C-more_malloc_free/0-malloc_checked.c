#include "main.h"

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
void *malloc_checked(unsigned int b)
{
	int *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
