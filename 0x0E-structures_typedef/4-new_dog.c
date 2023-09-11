#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: is a string which is a pointer to a char
 * @age: a variable of float type
 * @owner: is a string which is a pointer to a char
 *
 * Description: this function creates a new dog
 * Return: the newly created string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);
	if  (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if  (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
