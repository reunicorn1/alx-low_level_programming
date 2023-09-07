#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: is a variable of int type
 * @max: is a variable of int type
 *
 * Description: this function creates an array of integers from min to max
 * Return: a pointer to the new array
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min + 1); i++)
		ptr[i] = min + i;
	return (ptr);
}
