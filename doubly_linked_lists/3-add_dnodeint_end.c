#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a new node at the end of a doubly linked list.
* @head: Double pointer to the head of the list.
* @n: Integer value to add to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *lastNode = *head;

	if (head == NULL || newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (newNode);
}
