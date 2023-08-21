#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: is a pointer to the first element of the array
 * @n: is a variable of int type
 *
 * Description: this function prints n elements of an array of integers
 * Return: non
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", *a);
	for (i = 1; i < n; i++)
		printf(", %d", *(a + i));
	printf("\n");
}
