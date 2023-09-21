#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adss a new node at the beginning of a list
 * @head: is the address of the header of the list
 * @str: a string to be copied in the str structure member
 *
 * Return: the address of the nex element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = strlen(str);
	n->next = *head;
	*head = n;
	return (*head);
}
