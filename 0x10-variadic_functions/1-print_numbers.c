#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print a variable number of integers separated by separator.
 * @separator: The string used to separate numbers (or NULL for no separator).
 * @n: The number of integers to print.
 * @...: The integers to print.
 *
 * Description: This function prints variable number of integers, separated by
 * the given separator string. If separator is NULL, no separator is used.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int x;
	unsigned int j;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && j < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

