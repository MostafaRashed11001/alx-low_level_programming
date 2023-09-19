#include <stdlib.h>
#include "main.h"
#define MAX 2147483647
/**
 * malloc_checked - Allocate memory and check for success.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory if successful,
 *         or exit with status 98 if allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	if (b == 0 || b >= MAX)
		exit(98);
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
