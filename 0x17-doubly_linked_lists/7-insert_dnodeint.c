#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t
 * @h: the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp = NULL;

	if (h)
	{
		temp = (dlistint_t *)(h);
		while (temp)
		{
			count++;
			temp = temp->next;
		}
	}
	return (count);
}

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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: is a pointer to the head of the list
 * @idx: is the index where new node should be added
 * @n: the data of the new node
 *
 * Return: address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	int size;
	if (h && *h)
	{
		size = dlistint_len(*h);
		if (idx == 0)
			return (add_dnodeint(h, n));
		if (idx == (unsigned int)size)
			return (add_dnodeint_end(h, n));
		temp = get_dnodeint_at_index(*h, idx);
		if (!temp)
			return (NULL);
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		temp->prev->next = new;
		new->prev = temp->prev;
		new->next = temp;
		temp->prev = new;
		return (new);
	}
	return (NULL);
}
