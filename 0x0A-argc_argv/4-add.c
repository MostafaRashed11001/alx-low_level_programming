#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Description: This program calculates the sum of integer values provided as
 * command-line arguments. It checks if each argument is a digit and adds it to
 * the sum. If any argument is not a digit, it prints "Error" and returns 1.
 * If there are no arguments, it prints 0.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc >= 2)
	{
		for (; i < argc; i++)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("%s\n", "Error");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
