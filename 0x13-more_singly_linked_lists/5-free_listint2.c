#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a lisint_t list
 * @head: the pointer to the head of the list
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *next;
	
	if (head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}
