#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocate memory for an array of elements and initialize to 0.
 * @nmemb: Number of elements to allocate memory for.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to allocated and initialized memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		for (j = 0; j < size; j++)
		{
			*((char *)ptr + (i * size) + j) = 0;
		}
	}
	return (ptr);
}
