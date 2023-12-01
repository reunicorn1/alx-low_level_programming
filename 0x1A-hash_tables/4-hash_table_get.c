#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrives a value associated with a key
 * @ht: is a pointer to the hashtable
 * @key: the key you are looking for
 *
 * Return: the value associated w/ element or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (key && ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
		return (NULL);
	}
	return (NULL);
}
