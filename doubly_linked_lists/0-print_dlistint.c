#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		length++;
	}

	return (length);
}