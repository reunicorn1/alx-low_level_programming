#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 *               using the jump search algorithm
 * note: in every iteration, the integer and its index are printed
 * @array: pointer to the array of integers to be searched
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the index of the value to be searched
 */

int jump_search(int *array, size_t size, int value)
{
	int curr = 0, prev = 0, block = sqrt(size);

	if (!array)
		return (-1);

	while ((size_t)curr < size)
	{
		if (value <= array[curr])
			return (linear_search_j(array, prev, curr, value, (int)size));
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr, curr += block;
	}
	return (linear_search_j(array, prev, curr, value, (int)size));
}

/**
 * linear_search_j - searches for a value in an array of integers
 *                   using the jump search algorithm
 * note: in every iteration, the integer and its index are printed
 * @array: pointer to the array of integers to be searched
 * @prev: the start of the array
 * @curr: the end of the array
 * @value: the value to be searched
 * @size: the size of the array
 *
 * Return: the index of the value to be searched, or -1
 */
int linear_search_j(int *array, int prev, int curr, int value, int size)
{
	int i;

	printf("Value found between indexes [%d] and [%d]\n", prev, curr);
	for (i = prev; i <= curr && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
