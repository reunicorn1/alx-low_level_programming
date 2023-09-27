#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: is the head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *ptr;

	ptr = (listint_t *)head;
	while (ptr)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		i++;
		if (ptr <= ptr->next)
		{
			ptr = ptr->next;
			printf("-> [%p] %d\n", (void *)ptr, ptr->n);
			break;
		}
		ptr = ptr->next;
	}
	return (i);
}
