#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head of the list
 *
 * Return: the size of the list, number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = NULL;
	size_t count = 0;

	if (h)
	{
		temp = (dlistint_t *)(h);
		while (temp)
		{
			count++;
			printf("%d\n", temp->n);
			temp = temp->next;
		}
	}
	return (count);
}
