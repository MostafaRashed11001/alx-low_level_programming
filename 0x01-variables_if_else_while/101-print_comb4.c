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
	int ch = 48, num = 48, last = 48;
	/* Write the lowercase English alphabet characters to stdout */
	for (num = 48; num <= 57; num++)
	{
		for (ch = num + 1; ch <= 57; ch++)
		{
			for (last = ch + 1; last <= 57; last++)
			{
				if (last != 50)
				{
					putchar(44);
					putchar(32);
				}
				putchar(num);
				putchar(ch);
				putchar(last);
			}
		}
	}
	/* Write a newline character to separate output */
	putchar('\n');
	return (0);
}
