#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: a two dimentional array previously created
 * @height: a variable of int type
 *
 * Description: this function  frees a 2 dimensional grid
 * Return: non
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
