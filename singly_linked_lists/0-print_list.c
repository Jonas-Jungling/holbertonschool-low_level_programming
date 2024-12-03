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
	const list_t *current = h;
	int length = 0;

	while (current != NULL)
	{
		if (current->str != NULL)
			printf("%s\n", current->str);
		else
			printf("[0] (nil)\n");

		current = current->next;
		length++;
	}

	return (length);
}
