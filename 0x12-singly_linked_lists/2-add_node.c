#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a node to the beggining of the list.
 * @head: first node.
 * @str: string with argument.
 * Return: Address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;


		newnode = malloc(sizeof(list_t));

		if (newnode == NULL)
		{
			return (NULL);
		}

		while (str[i] != '\0')
		{
			i++;
		}

		newnode->str = strdup(str);
		newnode->len = i;
		newnode->next = *head;

		*head = newnode;

		return (*head);
}
