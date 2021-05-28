#include "hash_tables.h"

/**
* key_index - Calculates the index of a key.
* @key: Key to be found
* @size: Size of the array
* Return: Returns the index of the key.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index = hash_djb2(key);
	unsigned long int _index = index % size;

	return (_index);
}
