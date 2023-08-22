#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the input string.
 */
void print_rev(char *s)
{
	int i, j = 0, strlen = 0;

	while (s[j] != '\0')
	{
		strlen++;
		j++;
	}
	for (i = strlen - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
