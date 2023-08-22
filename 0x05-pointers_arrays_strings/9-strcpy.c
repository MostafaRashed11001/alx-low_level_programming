#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0, strlen = 0;

	while (src[i] != '\0')
	{
		strlen++;
		i++;
	}
	for (; j < strlen; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
