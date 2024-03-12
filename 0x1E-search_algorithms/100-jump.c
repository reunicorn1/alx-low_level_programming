#include "search_algos.h"
#include <math.h>
#include <stddef.h>

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
	int i, curr = 0, prev = 0, block = sqrt(size);

	if (!array || size == 0)
		return (-1);
	while ((size_t)curr < size)
	{
		if (value <= array[curr])
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, curr);
			size = curr + 1, i = prev;
			for (; (size_t)i < size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr, curr += block;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	return (-1);
}
