#include "lists.h"

/**
* insert_dnodeint_at_index - Inserts node at i position.
* @h: Pointer to head.
* @idx: Position where the node will be added"
* @n: Value.
* Return: A pointer to new node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *tmp_node;

	if (h == NULL)
	{
		return (0);
	}
	tmp_node = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (tmp_node && i < idx)
	{
		tmp_node = tmp_node->next;
		i++;
	}

	if (tmp_node == NULL && i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	if (i == idx)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->prev = tmp_node->prev;
		new_node->next = tmp_node;
		tmp_node->prev->next = new_node;
		tmp_node->prev = new_node;

		return (new_node);
	}

	return (NULL);
}
