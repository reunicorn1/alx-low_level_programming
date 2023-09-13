#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - xecutes a function given as a parameter on each element
 * @array: is a pointer to the first element of integers
 * @size: is a size_t type which is the size of bytes of the array
 * @action: is th called back function
 *
 * Description: this function prints a string, followed by a new line.
 * Return: non
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
