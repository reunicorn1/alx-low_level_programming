#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_safe - frees a linked list safely
 * @h: a pointer to the head of the list
 *
 * Return: the size of the list was free'd
 */

size_t free_safe(listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		count++;
		if (h > h->next)
			count += free_safe(h->next);
		free(h);
	}
	return (count);
}

/**
 * free_listint_safe - frees a linked list safely
 * @h: a pointer to the head of the list
 *
 * Return: the size of the list was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;

	if (h)
	{
		num = free_safe(*h);
		*h = NULL;
	}
	return (num);
}
