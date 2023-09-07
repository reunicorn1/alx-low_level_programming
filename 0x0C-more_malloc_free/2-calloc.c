#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: is the number of blocks of memory
 * @size: is the size of each block of memory to be allocated
 *
 * Description: this function allocates memory for an array, using malloc
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	/* allocating memory and conditionns */
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	/* setting memory to zero */
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
