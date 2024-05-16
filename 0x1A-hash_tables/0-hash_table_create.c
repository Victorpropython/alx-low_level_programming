#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the aray
 *
 * Return: to return NULL or a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	/*unsigned long int i;*/

	ptr = malloc(sizeof(hash_table_t));
	if (size == 0)
	{
		return (NULL);
	}

	(*ptr).size = size;

	(*ptr).array = malloc(size * sizeof(hash_node_t));
	if ((*ptr).array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/*for (i = 0; i < size; i++)
	*{
	*	(*ptr).array[i] = NULL;
	*}
	*/

	return (ptr);
}
