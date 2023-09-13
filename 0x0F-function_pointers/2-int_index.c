#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: is a pointer to the first int of an array
 * @size: is a variable of int type
 * @cmp: is a pointer to a function which takes int arguments
 *
 * Description: this function searches for an integer
 * Return: the index of the 1st element that returns 1 from cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j, flag;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	flag = 0;
	for (j = 0; j < size; j++)
	{
		i = cmp(array[j]);
		if (i != 0)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		return (-1);
	else
		return (j);
}
