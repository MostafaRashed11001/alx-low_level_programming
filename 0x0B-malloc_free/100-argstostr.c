#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string, or NULL if failure.
 */
char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, charlen = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			charlen++;
		}
		charlen++;
	}
	ptr = (char *)malloc((charlen + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[len++] = av[i][j];

		}
		ptr[len++] = '\n';
	}
	ptr[len] = '\0';
	return (ptr);
}
