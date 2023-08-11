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
	/* Write the number English alphabet characters to stdout */
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	/* Write the lowercase English alphabet characters to stdout */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	/* Write a newline character to separate output */
	putchar('\n');
	return (0);
}