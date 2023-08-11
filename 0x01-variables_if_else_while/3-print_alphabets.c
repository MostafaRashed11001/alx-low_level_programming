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
	char ch = '1';
	/* Write the lowercase English alphabet characters to stdout */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* Write the uppercase English alphabet characters to stdout */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	/* Write a newline character to separate output */
	putchar('\n');
	return (0);
}
