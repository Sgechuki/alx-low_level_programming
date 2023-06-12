#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D array previously created
 * @grid: 2D array created
 * @height: height of 2D array
 * Retun: Always void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
