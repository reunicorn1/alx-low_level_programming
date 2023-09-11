#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a struct dog
 *
 * Description: this function prints a struct dog
 * Return: non
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "nil";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "nil";
		printf("Owner: %s\n", d->owner);
	}
}
