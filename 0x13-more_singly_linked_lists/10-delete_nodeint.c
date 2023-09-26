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

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * @head: the pointer to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 in success, -1 in failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *ptr;

	if (*head && head)
	{
		if (index == 0)
		{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
			return (1);
		}
		else
		{
			node = get_nodeint_at_index(*head, index - 1);
			if (node == NULL)
				return (-1);
			ptr = get_nodeint_at_index(*head, index);
			if (ptr == NULL)
				return (-1);
			node->next = ptr->next;
			free(ptr);
			return (0);
		}
	}
	else
		return (-1);
}
