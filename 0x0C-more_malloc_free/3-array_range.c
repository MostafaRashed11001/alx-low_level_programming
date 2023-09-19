#include <stdlib.h>
#include "main.h"

/**
 * array_range - Create an array of integers with values in specified range.
 * @min: The minimum value for the range (inclusive).
 * @max: The maximum value for the range (inclusive).
 *
 * Return: A pointer to the newly allocated integer array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, j;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = min; i <= (max - min)  && j <= max; i++, j++)
		ptr[i] = j;
	return (ptr);
}
