#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: is an array of int type
 * @n: is the number of elements of the array
 *
 * Description: this function reverses the content of an array of integers
 * Return: non
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int tem[100];

	for (i = 0; i < n; i++)
		tem[i] = a[i];
	for (i = 0, j = n - 1; i < n; i++, j--)
		a[j] = tem[i];
}
