#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string to concatenate to the first.
 *
 * Return: If successful,a pointer to the concatenated string; otherwise, NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	unsigned int i = 0, j = 0, strlen1 = 0, strlen2 = 0, strnew = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		strlen1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		strlen2++;
		j++;
	}
	strnew = strlen1 + strlen2;
	ptr = (char *)malloc((strnew + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = strlen1, j = 0; i < strnew && j < strlen2; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
