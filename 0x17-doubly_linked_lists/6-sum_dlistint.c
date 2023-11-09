#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of data in a dlistint_t linked list.
 * @head: the head of a list
 *
 * Return: the sum of all data of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
		sum = head->n + sum_dlistint(head->next);
	return (sum);
}

