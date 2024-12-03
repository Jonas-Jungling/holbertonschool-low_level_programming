#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_dnodeint_at_index - Returns the nth node of a doubly linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node, starting from 0.
*
* Return: The nth node, or NULL if the node does not exist.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
