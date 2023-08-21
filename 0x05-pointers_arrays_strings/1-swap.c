#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: a variable which is a pointer to an int
 * @b: a variable which is a pointer to an int
 *
 * Description: this function swaps the values of two integers
 * Return: non
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
