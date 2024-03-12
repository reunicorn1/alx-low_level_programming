#include "search_algos.h"

/**
 * binary_search -  Searches for a value in a sorted array of
 *					integers using the Binary search algorithm
 * Note: each time the array is halved, it gets printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the index if th value to be searched.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, mid;

	if (!array)
		return (-1);

	while (lo <= hi)
	{
		mid = lo + ((hi - lo) / 2);
		printing(array, lo, hi);
		if (array[mid] > value && mid > 0)
			hi = mid - 1;
		else if (array[mid] < value && mid < size)
			lo = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

/**
 * printing - Prints the subarray to be searched within
 *
 * @array: pointer to the array of integers to be sorted
 * @lo: the lowest index of the array
 * @hi: the hightest index of the array
 *
 * Return: Nothing.
 */
void printing(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: %d", array[lo]);
	for (i = lo + 1; i <= hi; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}
