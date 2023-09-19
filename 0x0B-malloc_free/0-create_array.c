#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * and initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: If successful, a pointer to the created array; otherwise, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
