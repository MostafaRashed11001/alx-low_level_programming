#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D array of integers initialized to 0.
 * @width: The width of the grid (number of columns).
 * @height: The height of the grid (number of rows).
 *
 * Return: If successful,a pointer to the allocated grid; otherwise, NULL.
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc((height) * sizeof(int *));

	if (ptr == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (; j < width; j++)
		{
			ptr[i][j] = 0;
		}
		j = 0;
	}
	return (ptr);
}
