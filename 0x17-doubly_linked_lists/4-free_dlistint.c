#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: is the head of the list
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		if (head->next)
			free_dlistint(head->next);
		free(head);
	}
}

