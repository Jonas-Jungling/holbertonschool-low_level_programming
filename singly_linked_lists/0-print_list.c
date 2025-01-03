#include "lists.h"
#include <stdio.h>

/**
* print_list - Prints all the elements of a list_t list.
* @h: The list_t list.
*
* Return: The number of nodes in the list_t list.
*/
size_t print_list(const list_t *h)
{
	int length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		length++;
	}

	return (length);
}
