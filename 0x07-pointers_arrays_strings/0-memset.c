#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte value to be set.
 * @n: Number of bytes to be set to the value.
 *
 * Description: This function fills the first @n bytes of the memory area
 * pointed to by @s with the constant byte @b.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
