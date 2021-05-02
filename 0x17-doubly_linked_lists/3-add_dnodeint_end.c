#include "lists.h"

/**
* add_dnodeint_end - Function that adds node at the end of list.
* @head: Pointer that points to first node.
* @n: Content to be inserted into node.
* Return: Returns pointer to newly allocated node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_node;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		tmp_node = *head;

		while (tmp_node->next != NULL)
		{
			tmp_node = tmp_node->next;
		}
		tmp_node->next = new_node;
		new_node->prev = tmp_node;
		new_node->next = NULL;
	}


	return (new_node);
}
