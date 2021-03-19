#include "lists.h"

/**
 * print_list - print elements of lists.
 *
 * @h: string.
 *
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
				h = h->next;
		}
		count++;
	}
	return (count);
}
