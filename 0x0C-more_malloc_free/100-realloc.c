#include "main.h"

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 *
 * @ptr: memory area to be reallocated
 * @old_size: old memory size of ptr
 * @new_size: new memory area for ptr
 *
 * Return: ptr and Null (fail)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int m;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		m = 0;
		while (m < new_size)
		{
			new_ptr[m] = old_ptr[m];
			m++;
		}
	}
	if (new_size > old_size)
	{
		m = 0;
		while (m < old_size)
		{
			new_ptr[m] = old_ptr[m];
			m++;
		}
	}
	free(ptr);
	return (new_ptr);
}
