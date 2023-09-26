#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_list - returns the sum of all the data (n) of a linked list
 * @head: the head of the list
 * @add: the addition sum;
 *
 * Return: the sum of all data (n)
 */

int sum_list(listint_t *head, int add)
{
	if (head)
		return (sum_list(head->next, add + (head->n)));
	return (add);
}

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: the head of the list
 *
 * Return: the sum of all data (n)
 */

int sum_listint(listint_t *head)
{
	if (head)
		return (sum_list(head, 0));
	else
		return (0);
}
