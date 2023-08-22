#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: Pointer to the input string.
 */
void rev_string(char *s)
{
	int i, j = 0, k, strlen = 0;
	char tmp;

	while (s[j] != '\0')
	{
		strlen++;
		j++;
	}
	for (i = strlen - 1, k = 0 ; i >= strlen / 2 && k <= strlen / 2; i--, k++)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
	}
}
