#include "lists.h"

/**
 * list_len - returns number of elements.
 *
 * @h: pointer to node
 *
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
