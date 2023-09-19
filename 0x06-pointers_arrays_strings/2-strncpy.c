#include "main.h"

/**
 * _strncpy - Copies up to 'n' characters from the source to destination.
 * @dest: The destination string where the content will be copied.
 * @src: The source string from which the content will be copied.
 * @n: The maximum number of characters to copy from the source.
 *
 * Return: Pointer to the destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0, my_n = n;

	while (src[i] != '\0')
	{
		src_len++;
		i++;
	}
	if (my_n > src_len)
		my_n = src_len;
	for (i = 0; i < my_n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
