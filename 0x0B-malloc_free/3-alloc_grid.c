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
	int i, j, k;

	if (width < 1 || height < 1)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(ptr[k]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
