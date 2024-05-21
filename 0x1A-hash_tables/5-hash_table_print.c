#include "hash_tables.h"
/**
 * hash_table_print- function to print a hash table
 * @ht: the hash table
 *
 * Return: to return hash table in order the appear or NULL
 * if empty
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *store;
	int not_seen = 0;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		store = ht->array[index];
		while (store)
		{
			if (!not_seen)
			{
				printf(", ");
			}
			printf("'%s': '%s'", store->key, store->value);
			not_seen = 1;
			store = store->next;
		}
	}
	printf("}\n");
}
