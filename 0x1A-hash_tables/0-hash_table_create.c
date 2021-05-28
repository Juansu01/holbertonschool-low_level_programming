#include "hash_tables.h"
/**
* hash_table_create - This function creates a new hash table.
*
* @size: This number determines the size of the hash table.
* Return: Returns a pointer to the new hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size <= 0)
	{
		return (NULL);
	}

	hash_table = malloc(sizeof(hash_table_t) * size);

	if (hash_table == NULL)
	{
		return (NULL);
	}

	return (hash_table);
}
