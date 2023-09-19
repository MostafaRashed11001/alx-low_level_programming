#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print a variable number of values based on a format string.
 * @format: A format string containing format specifiers.
 * @...: The values to be printed.
 *
 * Description: This function prints a variable number of values based on the
 * format string provided. The format string can contain the following
 * specifiers:
 *   - 'c': Character
 *   - 'i': Integer
 *   - 'f': Float
 *   - 's': String (if NULL, prints "(nil)")
 *
 * The values are retrieved from the variable argument list and printed
 * according to the format string. Values are separated by commas and a
 * newline character is printed at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0;
	const char *str = NULL;

	va_start(args, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			default:
				j++;
				continue;
		}
		if (format[j + 1])
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(args);
}
