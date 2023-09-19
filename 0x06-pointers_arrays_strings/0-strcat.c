#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which the source will be appended.
 * @src: The source string to be appended to the destination.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k, x, dest_len = 0, src_len = 0, con_len = 0;

	while (dest[i] != '\0')
	{
		dest_len++;
		i++;
	}
	while (src[j] != '\0')
	{
		src_len++;
		j++;
	}
	con_len = dest_len + src_len;

	for (k = dest_len, x = 0; k <= con_len && x < src_len; k++, x++)
	{
		dest[k] = src[x];
	}
	dest[k] = '\0';
	return (dest);
}
