#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet
 * 10 times followed by new lines
 *
 * Description:
 * This function prints the lowercase alphabet from 'a' to 'z' ten times,
 * with each set followed by a newline character.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			/* Print the current letter */
			letter++;
		}
		_putchar('\n');
		/* Print a newline character after printing the alphabet */
		letter = 'a';
		/* Reset letter to 'a' for the next iteration */
		counter++;
	}
}
