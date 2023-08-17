#include "main.h"

/**
 * print_triangle - Print a triangle using #
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= row; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
