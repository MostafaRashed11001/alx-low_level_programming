#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string.
 * @str: The source string to duplicate.
 *
 * Return: If successful, a pointer to the duplicated string; otherwise, NULL.
 */
char *_strdup(char *str)
{
	char *ptr = NULL;
	unsigned int i = 0, strlen = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		strlen++;
		i++;
	}
	ptr = (char *)malloc((strlen + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	i = 0;

	for (; i < strlen; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
