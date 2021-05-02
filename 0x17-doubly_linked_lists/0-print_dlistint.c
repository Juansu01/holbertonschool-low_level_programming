#include "lists.h"

/**
* print_dlistint - Prints the contents of a doubly linked list.
* @h: Pointer to head of linked list.
* Return: Returns number of printed nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		return (-1);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
