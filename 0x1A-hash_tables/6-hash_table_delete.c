#include "hash_tables.h"
/**
 * hash_table_delete - Function to delete hash table
 * @ht: address of hash table
 *
 * Return: To return Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *store, *aux_free;

	if (!ht)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		store = ht->array[i];
		while (store)
		{
			aux_free = store;
			store = store->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
