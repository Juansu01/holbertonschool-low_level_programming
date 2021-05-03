#include "lists.h"

/**
* get_dnodeint_at_index - Returns node at index.
*
* @head: Pointer to first node of list.
* @index: Position of desired node.
* Return: Returns pointer to desired node.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int count = 0;

	current_node = head;

	while (current_node != NULL)
	{
		if (count == index)
		{
			return (current_node);
		}

		count++;
		current_node = current_node->next;
	}

		return (NULL);
}
