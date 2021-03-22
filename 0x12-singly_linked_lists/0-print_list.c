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
	unsigned int count;
	int zero = 0;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%i] (nil)\n", zero);
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
