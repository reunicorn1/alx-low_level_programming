#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: the head of the list
 * @index: the index of the node required
 *
 * Return: the required node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		if (index != 0 && head->next)
		{
			index -= 1;
			return (get_dnodeint_at_index(head->next, index));
		}
		if (index == 0)
			return (head);
		else
			return (NULL);
	}
	return (NULL);
}
