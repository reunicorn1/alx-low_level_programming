#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - The hash function - generates indexs for a key
 * @key: is they key to be hashed
 * @size: the size of the hashtable
 *
 * Return: the index of the key to be hashed
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int code;

	code = hash_djb2(key);
	return (code % size);
}
