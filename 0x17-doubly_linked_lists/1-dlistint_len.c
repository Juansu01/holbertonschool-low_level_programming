#include "lists.h"

/**
* dlistint_len - Returns length of a linked list.
* @h: Pointer to head of linked list.
* Return: Returns number of printed nodes.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_number = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		node_number++;
	}

	return (node_number);
}
