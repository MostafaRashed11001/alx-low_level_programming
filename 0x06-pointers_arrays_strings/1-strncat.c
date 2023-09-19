#include "main.h"

/**
 * _strncat - Concatenates two strings up to a specified number of characters.
 * @dest: The destination string to which the source will be appended.
 * @src: The source string to be appended to the destination.
 * @n: The maximum number of characters to append from the source.
 *
 * Return: Pointer to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k, x, dest_len = 0, src_len = 0, my_n = n;

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
	if (my_n > src_len)
	{
		my_n = src_len;
	}
	for (k = dest_len, x = 0; k < dest_len + my_n &&  x < my_n; k++, x++)
	{
		dest[k] = src[x];
	}
	dest[k] = '\0';
	return (dest);
}
