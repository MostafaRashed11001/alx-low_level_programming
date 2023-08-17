#include "main.h"

/**
 * print_line - Draw a straight line using underscores
 * @n: The number of times to print underscores
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
