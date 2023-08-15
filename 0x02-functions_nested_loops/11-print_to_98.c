#include <stdio.h>
/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: The starting number
 *
 * Description:
 * This function prints all natural numbers from the given number n
 * up to 98, separated by a comma and a space. The numbers are printed
 * in order, with the first number being the input n and the last
 * number being 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			/* Print the current number */
			if (n != 98)
			{
				printf(", ");
				/* Print comma and space if not the last number */
			}
			else
			{
				printf("\n");
				/* Print newline character for the last number */
			}
			n++;
			/* Move to the next number */
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			/* Print the current number */
			if (n != 98)
			{
				printf(", ");
				/* Print comma and space if not the last number */
			}
			else
			{
				printf("\n");
				/* Print newline character for the last number */
			}
			n--;
			/* Move to the next number */
		}
	}
}
