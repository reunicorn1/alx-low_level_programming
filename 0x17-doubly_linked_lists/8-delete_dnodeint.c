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

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: a pointer to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;;
	
	if (*head)
	{
		if (index == 0)
		{
			tmp = (*head);
			if (tmp->next)
				tmp->next->prev = NULL;
			(*head) = tmp->next;
			free(tmp);
			return (1);
		}
		tmp = get_dnodeint_at_index(*head, index);
		if (!tmp)
			return (-1);
		if (!tmp->next)
		{
			tmp->prev->next = NULL;
			free(tmp);
			return (1);
		}
		tmp->prev->next = tmp->next;
		tmp->next->prev = tmp->prev;
		free(tmp);
		return (1);
	}
	return (-1);
}
