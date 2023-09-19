#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: The input string to be capitalized.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
	int i = 0, new_word = 1;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
		|| s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			new_word = 1;
		}
		else if (new_word && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= ('a' - 'A');
			new_word = 0;
		}
		else
		{
			new_word = 0;
		}
		i++;
	}
	return (s);
}

