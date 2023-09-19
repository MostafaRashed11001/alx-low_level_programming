#include "main.h"

/**
 * string_toupper - Converts a string to uppercase.
 * @s: The input string to be converted.
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *s)
{
	int i = 0, j = 0, strlen = 0;

	while (s[i] != '\0')
	{
		strlen++;
		i++;
	}
	for (; j < strlen; j++)
	{
		if (s[j] >= 'a' && s[j] <= 'z')
			s[j] -= 'a' - 'A';
	}
	s[j] = '\0';
	return (s);

}
