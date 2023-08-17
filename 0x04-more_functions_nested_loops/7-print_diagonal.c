#include "main.h"

/**
 * print_diagonal - Draw a diagonal line using backslashes
 * @n: The number of times to print backslashes
 */
void print_diagonal(int n)
{
	int space, postn;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 0; postn < n; postn++)
		{
			for (space = 0; space < postn; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
