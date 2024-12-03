#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Double pointer to the head of the list.
* @str: String to be duplicated and added to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int i = 0;

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
