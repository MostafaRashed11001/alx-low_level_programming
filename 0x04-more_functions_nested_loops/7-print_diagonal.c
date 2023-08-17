#include "main.h"

/**
 * print_diagonal - Draw a diagonal line using backslashes
 * @n: The number of times to print backslashes
 */
void print_diagonal(int n)
{
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (; n > 0; n--)
	{
		for (spaces = 0; spaces < n - 1; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
