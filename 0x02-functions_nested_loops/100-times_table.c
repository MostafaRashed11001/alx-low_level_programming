#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: The multiplication table to print
 */
void print_times_table(int n)
{
	int prod, mul, num;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mul = 1; mul <= n; mul++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mul;
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
