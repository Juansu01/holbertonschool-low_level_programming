#include "hash_tables.h"

/**
* hash_table_set - Add item to hash table.
*
* @ht: The hash table.
* @key: Key to be inserted.
* @value: Value assigned to the key.
* Return: 1 if it adds key successfully, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;

	if (key == NULL || ht == NULL || value == NULL)
	{
		return (0);
	}

	if (strcmp(key, "") == 0)
	{
		return (0);
	}

	index = key_index((unsigned const char *)key, ht->size);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
	{
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
