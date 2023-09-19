#include <stdio.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Description: This program prints the command-line arguments passed to it,
 * one argument per line. It also adds an extra newline character for
 * formatting.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
