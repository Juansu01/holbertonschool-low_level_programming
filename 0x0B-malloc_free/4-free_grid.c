#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - free memory used for grid
 *
 * @height: height of grid.
 * @grid: two dimensional array.
 *
 *
 *
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
