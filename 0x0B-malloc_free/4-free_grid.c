#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free 2dimension array
 * @height: height dimension fo the grid
 * @grid: 2dimension grid
 * description: frees memory of grid
 * return: nothing
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
