#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * loopfound - detects the loop in a linked list
 * @head: the head of the linked list
 * @loop: the location in which snail and rabbit met
 *
 * Return: the address of the node where the loop starts
 */

listint_t *loopfound(listint_t *head, listint_t *loop)
{
	while (head != loop)
	{
		head = head->next;
		loop = loop->next;
	}
	return (loop);
}

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the head of the linked list
 *
 * Return: the address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *rabbit;

	if (head)
	{
		snail = head;
		rabbit = head;
		while (rabbit && rabbit->next)
		{
			snail = snail->next;
			rabbit = rabbit->next->next;
			if (snail == rabbit)
				return (loopfound(head, snail));
		}
	}
	return (NULL);
}
