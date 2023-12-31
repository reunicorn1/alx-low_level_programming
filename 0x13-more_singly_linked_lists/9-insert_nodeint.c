#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t
 * @head: a pointer to the head of the list
 * @n: the data to be inserted into the new node
 *
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

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
 * insert_nodeint_at_index - inserts a new node at a give position
 * @head: is the pointer to the head of the list
 * @idx: the index of the list to where new node is added
 * @n: the data (n) inserted in the new node
 *
 * Return:the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *node;

	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}
	else
	{
		node = get_nodeint_at_index(*head, idx - 1);
		if (node == NULL)
			return (NULL);
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = node->next;
		node->next = new;
		return (new);
	}
}
