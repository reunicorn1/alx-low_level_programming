#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initilises a variable of type struct dog
 * @d: stucture dog
 * @name: a string which is a pointer of a char
 * @age: a vaiable of float type
 * @owner: a string which is a pointer of a char
 * Description: this function initilises a variable of type struct dog
 * Return: non
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
