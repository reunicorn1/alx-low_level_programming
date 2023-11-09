#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: a pointer to the head of the list
 * @n: the data to be inserted in the new node
 *
 * Return: the address of the new node or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = (*head);
	}
	(*head) = new;
	return (new);
}
