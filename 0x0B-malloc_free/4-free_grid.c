#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free the memory allocated for a 2D grid.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
