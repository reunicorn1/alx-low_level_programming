#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is a variable of innt type
 * @new_size: is a variable of int type
 *
 * Description: this function reallocates a memory block using malloc
 * Return: pinter to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr == NULL)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	/* allocation of new memory */
	if (new_size > 0)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	/* copying process */
	if (ptr != NULL && new_size > 0)
	{
		if (new_size < old_size)
			old_size = new_size;
		memcpy(new_ptr, ptr, old_size);
	}
	/* freeing process */
	if (ptr != NULL)
		free(ptr);
	if (new_size == 0)
		return (NULL);
	return (new_ptr);
}
