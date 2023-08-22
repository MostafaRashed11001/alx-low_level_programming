#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
