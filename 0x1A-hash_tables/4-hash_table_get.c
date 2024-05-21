#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve a value associated with a key
 * @ht: the hash table you want to look into
 * @key: key you are looking for
 *
 * Return: the value associated with the element or NULL if key is not
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *store;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	store = ht->array[index];
	while (store)
	{
		if (!strcmp(key, store->key))
			return (store->value);
		store = store->next;
	}
	return (NULL);
}
