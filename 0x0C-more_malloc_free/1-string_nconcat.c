#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenate two strings up to n characters.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i = 0, j = 0, s1len = 0, s2len = 0, ptrlen = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		s1len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		s2len++;
		j++;
	}
	if (n < s2len)
		s2len = n;
	ptrlen = s1len + s2len;
	ptr = malloc(sizeof(char) * (ptrlen + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		ptr[i] = s1[i];
	for (i = s1len, j = 0; i < ptrlen && j < s2len; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
