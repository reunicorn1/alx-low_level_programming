#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list
 * @index: the nth node to be extracted
 *
 * Return: Nothing.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index > 0)
		return (get_nodeint_at_index(head->next, index - 1));
	return (head);
}
