#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: Double pointer to the head of the list.
* @n: Integer to add to the new node.
*
* Return: Address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = (*head);
	newNode->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = newNode;

	(*head) = newNode;

	return (newNode);
}
