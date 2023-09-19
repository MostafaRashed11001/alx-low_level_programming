#include "main.h"

/**
 * leet - Converts certain characters to their "leet" equivalents.
 * @s: The input string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char leet_ch[] = "aAeEoOtTlL";
	char leet_sub[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;

		while (leet_ch[j] != '\0')
		{
			if (s[i] == leet_ch[j])
			{
				s[i] = leet_sub[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
