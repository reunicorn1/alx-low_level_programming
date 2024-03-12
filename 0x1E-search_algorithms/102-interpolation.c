#include "search_algos.h"

/**
 * interpolation_search -  Searches for a value in a sorted array of
 *					       integers using the interpolation search
 *					       algorithm
 * Note: each time the array is halved, it gets printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the index if th value to be searched.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, pos;

	if (!array || !size)
		return (-1);

	while (lo <= hi)
	{
		pos = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
				(value - array[lo]));
		if (pos >= size)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = [%d]\n", pos, array[pos]);

		if (array[pos] > value && pos > 0)
			hi = pos - 1;
		else if (array[pos] < value && pos < size)
			lo = pos + 1;
		else
			return (pos);
	}
	return (-1);
}

