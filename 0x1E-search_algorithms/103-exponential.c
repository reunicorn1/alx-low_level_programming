#include "search_algos.h"

/**
 * exponential_search -  Searches for a value in a sorted array of
 *					     integers using the exponenttial search algorithm
 * Note: each time the array is halved, it gets printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the index if th value to be searched.
 */

int exponential_search(int *array, size_t size, int value)
{
	int curr = 1, prev = 0;

	if (!array || !size)
		return (-1);

	if (array[0] == value)
		return (0);
	while ((size_t)curr < size)
	{
		if (array[curr] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, curr);
			return (binary_search_e(array, size, prev, curr + 1, value));
		}
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr, curr = curr << 1;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, curr - 1);
	return (binary_search_e(array, size, prev, curr, value));
}

/**
 * binary_search_e -  Searches for a value in a sorted array of
 *					integers using the Binary search algorithm
 * Note: each time the array is halved, it gets printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * @start: the start of the array
 * @end: the end of the array
 * @value: the value to be searched
 *
 * Return: the index if th value to be searched.
 */

int binary_search_e(int *array, size_t size, int start, int end, int value)
{
	size_t lo = start, hi = end - 1, mid = 0;

	if (!array)
		return (-1);

	while (lo <= hi && (size_t)hi < size)
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
