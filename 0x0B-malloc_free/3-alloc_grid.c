#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: a variable of int type
 * @height: a variable of int type
 *
 * Description: this function  returns a pointer to a 2 dimensional array
 * Return: s pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
