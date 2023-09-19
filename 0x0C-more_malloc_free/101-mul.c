#include <stdlib.h>
#include "main.h"

/**
 * print_error - Prints an error message and exits with status 98.
 */
void print_error(void)
{
	char *error = "Error\n";

	while (*error)
	{
		_putchar(*error);
		error++;
	}
	exit(98);
}
/**
 * is_digit - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	int *result = NULL;
	char *num1  = NULL;
	char *num2  = NULL;
	int len1 = 0, len2 = 0, i, j, start = 0;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();
	num1 = argv[1];
	num2 = argv[2];

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result = malloc((len1 + len2) * sizeof(int));

	if (result == NULL)
		print_error();
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = result[i + j + 1] + mul;

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	while (start < len1 + len2 - 1 && result[start] == 0)
		start++;
	for (i = start; i < len1 + len2; i++)
		_putchar(result[i] + '0');
	_putchar('\n');
	free(result);
	return (0);
}
