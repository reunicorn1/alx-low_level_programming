#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * free_list_sdll - deletes a specific linked list chain in the hashtable.
 * @head: the head of the list.
 *
 * Return: Nothing.
 */

void free_list_sdll(shash_node_t *head)
{
	if (head)
	{
		free_list_sdll(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}

/**
 * shash_table_delete - deletes a hash node.
 * @ht: the pointer to the hash table.
 *
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
{
	int i;

	if (ht)
	{
		for (i = 0; i < (int)ht->size; i++)
		{
			if (ht->array[i])
			{
				free_list_sdll(ht->array[i]);
				ht->array[i] = NULL;
			};
		}
		free(ht->array);
		free(ht);
		ht = NULL;
	}
}

/**
 * shash_table_print_rev - prints the hash tabe using the sdll in rev
 * @ht: a pointer to the hash table.
 *
 * Return: Nothing.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int flag = 0;

	if (ht)
	{
		printf("{");
		tmp = ht->stail;
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print - prints the hash tabe using the sdll
 * @ht: a pointer to the hash table.
 *
 * Return: Nothing.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int flag = 0;

	if (ht)
	{
		printf("{");
		tmp = ht->shead;
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_get - get a value from a hash table.
 * @ht: the head of the hash table.
 * @key: the key to be looked for.
 *
 * Return: the value associated with the element or NULL.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp;

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

/**
 * create_shash_node - creates a new node in the shash table
 * @key: is the key value of the node
 * @value: is the value of the node
 *
 * Return: a pointer to the new node creates, NULL if failed.
 */

shash_node_t *create_shash_node(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (!node || !key || strlen(key) == 0 || !value)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;
	return (node);
}

/**
 * set_sdll - sets the sorted linked list according to ascii
 * @ht: apointer to the hashtable.
 * @node: a pointer to the node to be added.
 *
 * Return: Nothing.
 */

void set_sdll(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *tmp;

	/*The case of an empty list*/
	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	/*The case of adding at the beginning of the list*/
	if (strcmp(ht->shead->key, node->key) > 0)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		return;
	}
	/*The case of adding a node at the middle of the list*/
	tmp = ht->shead;
	while (tmp->snext)
	{
		tmp = tmp->snext;
		if (strcmp(tmp->key, node->key) > 0)
		{
			tmp->sprev->snext = node;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			node->snext = tmp;
			return;
		}
	}
	/*The case of reaching the final end of the list*/
	node->sprev = ht->stail;
	ht->stail->snext = node;
	ht->stail = node;
}

/**
 * shash_table_set - sets the hashtable and adds or updates an element.
 * @ht: the pointer to the hash table.
 * @key: is the key value of the node
 * @value: is the value of the node
 *
 * Return: 1 in success or 0 in failure.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *tmp, *node;
	unsigned long int index;

	node = create_shash_node(key, value);
	if (!node || !ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		set_sdll(ht, node);
	}
	else
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = node->value;
				free(node->key);
				free(node);
				/*only the value is adjusted so no sdll*/
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
		set_sdll(ht, node);
	}
	return (1);
}
/**
 * shash_table_create - creates a new hash table.
 * @size: the size of the hash table.
 *
 * Return: a pointer to the hash table or NULL in failure.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	int i;

	if (!table)
		return (NULL);
	table->size = size;
	table->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < (int)size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}
