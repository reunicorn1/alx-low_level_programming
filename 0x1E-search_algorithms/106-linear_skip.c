#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted list of integers
 *               using the jump search algorithm
 * note: in every iteration, the integer and its index are printed
 * @list: pointer to the head of the of the list to search in
 * @value: the value to be searched
 *
 * Return: a pointer to the first node where value is located or NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr = list, *prev = NULL;

	if (!list)
		return (NULL);
	while (curr->express)
	{
		prev = curr, curr = curr->express;
		printf("Value checked at index [%li] = [%d]\n", curr->index, curr->n);
		if (value <= curr->n)
			return (linear_search_skip(prev, curr, value));
	}
	prev = curr;
	while (curr->next)
		curr = curr->next;
	return (linear_search_skip(prev, curr, value));
}

/**
 * linear_search_skip - searches for a value in a singly linked list of
 *						integers
 * @prev: the previous node visited
 * @curr: current node
 * @value: the value to be searched
 *
 * Return: a pointer to the first node where value is located or NULL.
 */
skiplist_t *linear_search_skip(skiplist_t *prev, skiplist_t *curr, int value)
{
	size_t i;
	skiplist_t *pt;

	printf("Value found between indexes [%li] and [%li]\n", prev->index,
			curr->index);
	for (i = prev->index, pt = prev; i <= curr->index && pt; i++)
	{
		printf("Value checked at index [%li] = [%d]\n", pt->index, pt->n);
		if (value == pt->n)
			return (pt);
		pt = pt->next;
	}
	return (NULL);
}
