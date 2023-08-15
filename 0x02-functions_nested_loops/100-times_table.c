#include "main.h"
/**
 * print_times_table - Prints the n times table
 * @n: The times table to print
 *
 * Description:
 * This function prints the n times table in the specified format,
 * starting from 0 and going up to n times n.
 * The function will not print anything if n is greater than 15 or less than 0.
 */
void print_times_table(int n)
{
	int row, column, product;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (column = 0; column <= n; column++)
			{
				product = row * column;
				if (column != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (product < 10 && column != 0)
				{
					_putchar(' ');
				}
				else if (product < 100 && column != 0)
				{
					_putchar(' ');
				}
				if (product >= 100 && column != 0)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
				}
				else if (product >= 10 && column != 0)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
