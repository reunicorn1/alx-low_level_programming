#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: the header of the list
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);


}
