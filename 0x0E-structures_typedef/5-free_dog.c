#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: the dog structure
 *
 * Return: non
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);

	}
}
