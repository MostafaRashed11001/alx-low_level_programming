#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: Pointer to the input string.
 */
void puts_half(char *str)
{
	int i, j = 0, start, strlen = 0;

	while (str[j] != '\0')
	{
		strlen++;
		j++;
	}
	if (strlen % 2 == 0)
		start = strlen / 2;
	else
		start = (strlen + 1) / 2;
	for (i = start; i < strlen; i++)
		_putchar(str[i]);
	_putchar('\n');
}
