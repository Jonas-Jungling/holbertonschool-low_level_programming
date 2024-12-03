#include "lists.h"
#include <stdio.h>

/**
	* list_len - returns the number of elements in a linked list_t list
	* @h: pointer to the list_t list
	*
	* Return: number of elements in h
	*/
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int length = 0;

	while (current != NULL)
	{
		length++;
		current = current->next;
	}
	return (length);
}
