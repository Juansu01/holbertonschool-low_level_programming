#include "hash_tables.h"

/**
* hash_table_get - This function gets the element at a given key.
*
* @ht: Hash table.
* @key: Key to look for.
* Return: Pointer to value or NULL if it fails.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht == NULL)
	{
		return (NULL);
	}

	if (key == NULL)
	{
		return (NULL);
	}

	index = key_index((unsigned const char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		else
		{
			tmp = tmp->next;
		}
	}

	return (NULL);
}
