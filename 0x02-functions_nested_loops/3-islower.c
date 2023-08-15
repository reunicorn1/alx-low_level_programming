#include "main.h"

/**
 * _islower - checks if a char is lowercase
 * @c: is a variable of int type
 *
 * Description: this function checks if c is a lowercase letter or not
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{
	/* variable c is checked if its's lowercase */
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
