#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * create_item - creates new nodes for the hashtable
 * @key: the key to be inserted inside the node
 * @value: the value to be inserted inside the node
 *
 * Return: a pointer to the node created
 */

hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if ((!new) || (!key) || (strlen(key) == 0) || (!value))
		return (NULL);
	new->key = malloc(strlen(key) + 1);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = malloc(strlen(value) + 1);
	if (!new->value)
	{
		free(new);
		free(new->key);
		return (NULL);
	}
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: a pointer to the hashtable to be update
 * @key: is the key of the new node to be addded
 * @value: the value associated with the key
 *
 * Return: 1 if succeeded or 0 in failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *node;
	unsigned long int index, size;

	if (!ht)
		return (0);
	node = create_item(key, value);
	if (!node)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		/*look if the key already exists*/
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = node->value;
				free(node->key);
				free(node);
				return (1);
			}
			tmp = tmp->next;
		}
		/*key doesn't exist, new node is added*/
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
