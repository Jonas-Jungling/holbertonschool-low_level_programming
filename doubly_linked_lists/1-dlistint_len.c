#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - Returns the number of elements in a doubly linked list.
* @h: Pointer to the head of the doubly linked list.
*
* Return: The number of elements in the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}

	return (size);
}
