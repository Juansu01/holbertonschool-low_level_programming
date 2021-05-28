#include "hash_tables.h"

/**
* hash_table_print - Function that prints a hash table
*
* @ht: Hashtable.
* Return: Doesn't return.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			if (flag == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", ht->array[index]->key, ht->array[index]->value);
			ht->array[index] = ht->array[index]->next;
			flag = 1;
		}
	}
	printf("}\n");
}
