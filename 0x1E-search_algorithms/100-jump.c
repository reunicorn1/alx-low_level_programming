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
	int i, block = sqrt(size);

	if (!array || size == 0)
		return (-1);
	for (i = 0; (size_t)i < size; i += block)
	{
		if (value <= array[i])
		{
			printf("Value found between indexes [%d] and [%d]\n", i - block, i);
			size = i + 1, i = i - block;
			for (; (size_t)i < size; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n", i - block, i);
	printf("Value checked array[%d] = [%d]\n", i - block, array[i - block]);
	return (-1);
}
