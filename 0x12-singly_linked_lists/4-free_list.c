#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the lead of the list
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *n, *next;

	n = head;
	while (n != NULL)
	{
		next = n->next;
		free(n->str);
		free(n);
		n = next;
	}
}
