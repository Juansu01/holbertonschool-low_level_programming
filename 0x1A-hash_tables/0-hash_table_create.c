#include "hash_tables.h"
/**
* hash_table_create - This function creates a new hash table.
*
* @size: This number determines the size of the hash table.
* Return: Returns a pointer to the new hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int iter;

	if (size <= 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_table->array == NULL)
	{
		return (NULL);
	}

	for (iter = 0; iter < size; iter++)
	{
		hash_table->array[iter] = NULL;
	}

	return (hash_table);
}
