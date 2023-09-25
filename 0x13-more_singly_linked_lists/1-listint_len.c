#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - print all elements of a list_int_t
 * @h: the head of the list
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t i = 0;

	ptr = h;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
