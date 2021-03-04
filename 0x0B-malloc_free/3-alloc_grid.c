#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate a two dimensional
 * @width: width of array.
 * @height: height of array.
 * Return: Pointer to grid if success, or NULL.
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int i, j, f;
	int **grid;

	if (width <= 0 || height <= 0) /*check if w or h are 0*/
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int)); /*allocating memory for height*/
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)/*check memory, free memory, return NULL failure*/
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		for (f = i; f > 0; f--)
		{
			free(grid[f]);
		}
		free(grid);
		return (NULL);
		}
	}
	for (i = 0; i < height; i++) /*initializing both height and width to zero*/
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
