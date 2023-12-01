#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * free_list - deletes a specific linked list chain in the hashtable.
 * @head: the head of the list.
 *
 * Return: Nothing.
 */

void free_list(hash_node_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}

/**
 * hash_table_delete - deletes a hash node
 * @ht: the pointer to the hesh table.
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	int i;

	if (ht)
	{
		for (i = 0; i < (int)ht->size; i++)
		{
			if (ht->array[i])
			{
				free_list(ht->array[i]);
				ht->array[i] = NULL;
			}
			free(ht->array[i]);
		}
		ht = NULL;
	}
}
