#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @key: key 
 * @value: value
 * @ht: the hash table you want to add or update the key/value to
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *valuecopy, *keycopy;
	hash_node_t *store, *new_node;

	if (!ht || !key || !*key || !value)
		return (0);
	valuecopy = strdup(value);
	if (!valuecopy)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	store = ht->array[index];

	while (store)
	{
		if (!strcmp(key, store->key))
		{
			free(store->value);
			store->value = valuecopy;
			return (1);
		}
		store = store->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if(!keycopy)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
