#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the list through the address of header
 * @h: a pointer of type list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t n = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
