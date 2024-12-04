#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Double pointer to the head of the list.
* @idx: Index of the list where the new node should be added. Starts at 0.
* @n: Data to insert in the new node.
*
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	unsigned int i, size = 0;

	if (h == NULL)
		return (NULL);

	current = *h;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}

	if (idx > size)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == size)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;

	current = *h;
	for (i = 0; i < idx - 1; i++)
		current = current->next;

	newNode->next = current->next;
	newNode->prev = current;
	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
