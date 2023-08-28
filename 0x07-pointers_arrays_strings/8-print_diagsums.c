#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: an array of array
 * @size: is the size of the square array
 *
 * Description: this function checks prints the sum of the two diagonals of a square matrix
 * Return: non
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
		sum1 += a[(i * size) + i];

	for (i = 0, j = size - 1; i < size; i++, j--)
		sum2 += a[(i * size) + j];

	printf("%d, %d\n", sum1, sum2);
}
