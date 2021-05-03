#include "lists.h"

/**
* free_dlistint - Frees nodes from list.
* @head: Pointer to head of linked list.
* Return: Doesn't return.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_ptr;

	while (head != NULL)
	{
	free_ptr = head;
	head = head->next;
	free(free_ptr);
	}

}
