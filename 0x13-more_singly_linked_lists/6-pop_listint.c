#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pop off the head node of listint_t linked list
 * @head: a pointer to the head of the list
 *
 * Return: the head node's data (n);
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (head && (*head))
	{
		ptr = *head;
		*head = ptr->next;
		i = ptr->n;
		free(ptr);
		return (i);
	}
	else
		return (0);
}
