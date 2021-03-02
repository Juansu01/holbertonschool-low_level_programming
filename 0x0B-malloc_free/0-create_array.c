#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - initialize mem with chars.
 *
 * @size: array size.
 * @c: character to initialize.
 * Return: Returns pointer to ar, NULL if size is 0 or ar is 0.
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);


}
