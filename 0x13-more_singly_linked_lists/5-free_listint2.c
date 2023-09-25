#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a lisint_t list
 * @head: the pointer to the head of the list
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
/**
 * free_listint2 - frees a lisint_t list
 * @head: the pointer to the head of the list
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}
