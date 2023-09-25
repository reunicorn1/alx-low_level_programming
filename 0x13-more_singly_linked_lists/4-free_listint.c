#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the header of the list
 *
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
