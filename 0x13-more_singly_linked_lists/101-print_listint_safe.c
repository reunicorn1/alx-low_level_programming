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
	listint_t flag = {10, NULL};

	if (head)
	{
		while (head)
		{
			if (head->next == &flag)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				break;
			}
			printf("[%p] %d\n", (void *)head, head->n);
			i++;
			ptr = (listint_t *)head;
			head = head->next;
			ptr->next = &flag;
		}
		return (i);
	}
	else
		exit(98);
}
