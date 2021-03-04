#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array.
 *
 * @nmemb: this is the array.
 *
 * @size: size of allocation.
 *
 * Return: returns a pointer to allocated mem, returns NULL if not.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}

