#include "main.h"

/**
 * wildcmp - Compares two strings with wildcards.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 *
 * Description:
 * This function compares two strings, @s1 and @s2, where @s2 can contain
 * a special character '*' that matches any substring (including an empty
 * substring). The function returns 1 if the strings are identical considering
 * the wildcards, otherwise it returns 0.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (!*s1 && !*(s2 + 1))
			return (1);
		if (!*s1)
			return (wildcmp(s1, s2 + 1));
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 != *s2)
		return (0);
	if (!*s1 && !*s2)
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
