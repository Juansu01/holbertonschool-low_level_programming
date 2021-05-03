#include "lists.h"

/**
* sum_dlistint - Sums content of list.
* @head: Pointer to first node.
* Return: Returns sum.
*
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp_node;

	if (head == NULL)
	{
		return (0);
	}

	tmp_node = head;

	while (tmp_node != NULL)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}

	return (sum);
}
