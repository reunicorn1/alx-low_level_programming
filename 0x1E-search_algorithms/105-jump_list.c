#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *             using the jump search algorithm
 * note: in every iteration, the integer and its index are printed
 * @list: pointer to the head of the of the list to search in
 * @size: the number of nodes in the list
 * @value: the value to be searched
 *
 * Return: a pointer to the first node where value is located or NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *curr = list, *prev = NULL;
	size_t block = sqrt(size);

	if (!list)
		return (NULL);
	if (curr->n == value)
		return (curr);
	while (curr->next)
	{
		prev = curr, curr = stepping(curr, block);
		printf("Value checked array[%li] = [%d]\n", curr->index, curr->n);
		if (value <= curr->n)
			return (linear_search_list(prev, curr, value));
	}
	return (linear_search_list(prev, curr, value));
}

/**
 * stepping - pretends that it jumps through a singly linked list
 * @node: pointer of the singly list to be used for jumping
 * @step: the number of steps to be jumped
 *
 * Return: A pointer of the new location to be jumped
 */
listint_t *stepping(listint_t *node, size_t step)
{
	size_t i = 0;

	while (i < step && node->next)
	{
		node = node->next;
		i++;
	}
	return (node);
}
/**
 * linear_search_list - searches for a value in a singly linked list of
 *						integers
 * @prev: the previous node visited
 * @curr: current node
 * @value: the value to be searched
 *
 * Return: a pointer to the first node where value is located or NULL.
 */
listint_t *linear_search_list(listint_t *prev, listint_t *curr, int value)
{
	size_t i;
	listint_t *pt;

	printf("Value found between indexes [%li] and [%li]\n", prev->index,
			curr->index);
	for (i = prev->index, pt = prev; i <= curr->index && pt; i++)
	{
		printf("Value checked array[%li] = [%d]\n", pt->index, pt->n);
		if (value == pt->n)
			return (pt);
		pt = pt->next;
	}
	return (NULL);
}
