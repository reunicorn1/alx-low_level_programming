#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the head of the hash table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	int i, flag = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < (int)ht->size; i++)
		{
			if (ht->array[i])
			{
				tmp = ht->array[i];
				while (tmp)
				{
					if (flag)
						printf(", ");
					printf("'%s': '%s'", tmp->key, tmp->value);
					flag = 1;
					tmp = tmp->next;
				}
			}
		}
		printf("}\n");
	}
}
