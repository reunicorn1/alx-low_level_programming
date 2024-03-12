#include "search_algos.h"
#include <stddef.h>

/**
 * linear_search - searches for a value in an array of integers
 *                 using the linear search algorithm
 * note: in every iteration, the integer and its index are printed
 * @array: pointer to the array of integers to be searched
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the index of the value to be searched
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	for (i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
