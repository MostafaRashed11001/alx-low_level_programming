#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print a variable number of strings separated by a separator.
 * @separator: The string used to separate strings(or NULL for no separator).
 * @n: The number of strings to print.
 * @...: The strings to print.
 *
 * Description: This function prints a variable number of strings, separated
 * by given separator string. If separator is NULL, no separator is used.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str = NULL;

	va_start(args, n);

	for (i = 0; i < n ; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}
