#include "search_algos.h"
#include <stddef.h>

/**
 * advanced_binary -  Searches for a value in a sorted array of
 *					  integers using the Binary search algorithm
 * Note: each time the array is halved, it gets printed
 * @array: pointer to the array of integers to be sorted
 * @size: size of the array
 * @value: the value to be searched
 *
 * Return: the index if th value to be searched.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1;

	if (!array)
		return (-1);
	return (advanced_binary_split(array, lo, hi, value, size));
}

/**
 * advanced_binary_split -  Searches for a value in a sorted array of
 *					  integers using the Binary search algorithm
 * Note: each time the array is halved, it gets printed
 * @array: pointer to the array of integers to be sorted
 * @lo: the start of the array
 * @hi: the end of the array
 * @value: the value to be searched
 * @size: the size of the array
 *
 * Return: the index if th value to be searched.
 */
int advanced_binary_split(int *array, size_t lo, size_t hi, int value,
		size_t size)
{
	int mid = lo + ((hi - lo) / 2);

	if (lo <= hi)
	{
		printing(array, lo, hi);
		if ((mid == 0 || array[mid - 1] < value) && array[mid] == value)
			return (mid);
		else if (array[mid] < value && (size_t)mid < size)
			return (advanced_binary_split(array, mid + 1, hi, value, size));
		else
			return (advanced_binary_split(array, lo, mid - 1, value, size));
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
