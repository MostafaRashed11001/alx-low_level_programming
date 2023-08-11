#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program writes the lowercase English alphabet
 * characters to the standard output (stdout).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare and initialize the character to be written */
	int ch = 48;
	/* frist number */
	putchar(ch);
	/* Write the lowercase English alphabet characters to stdout */
	for (ch = 49; ch <= 57; ch++)
	{
		putchar(44);
		putchar(32);
		putchar(ch);
	}
	/* Write a newline character to separate output */
	/* putchar('\n'); */
	return (0);
}
