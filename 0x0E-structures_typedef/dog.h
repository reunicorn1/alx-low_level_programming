#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog description structure
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Description: A Dog Description Structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif