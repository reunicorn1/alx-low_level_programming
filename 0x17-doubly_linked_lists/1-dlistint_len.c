#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t
 * @h: the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	static  count;

	if (h)
	{
		count++;
		dlistint_len(h->next);
	}
	return (count);
}
