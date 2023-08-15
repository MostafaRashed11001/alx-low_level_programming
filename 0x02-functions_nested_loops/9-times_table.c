#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Description:
 * This function prints the 9 times table in a specific format,
 * starting with 0 and going up to 9 times 9.
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;

			if (column != 0)
			{
				_putchar(',');
				/* Print comma separator */
				_putchar(' ');
				/* Print space character */
			}
			if (product < 10 && column != 0)
			{
				_putchar(' ');
				/* Print leading space for single-digit products */
			}
			else
			{
				_putchar((product / 10) + '0');
				/* Print tens digit of product */
			}
			_putchar((product % 10) + '0');
			/* Print ones digit of product */
			if (column == 9)
			{
				_putchar('\n');
				/* Print newline character at the end of the row */
			}
		}
	}
}
