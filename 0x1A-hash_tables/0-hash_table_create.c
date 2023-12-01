#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: the size of tha array of the hashtable
 *
 * Return: a pointer to the created hash table. or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
