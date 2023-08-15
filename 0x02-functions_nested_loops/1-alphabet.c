#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'
 *              followed by a newline character.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		/* Print the current letter  */
		_putchar(letter);
		letter++;
	}
	/* Print a newline character after printing the alphabet  */
	_putchar('\n');
}
