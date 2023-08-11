#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit
 * in the specified format.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_number = 0;
	/* Initialize the first two-digit number */
	int second_number = 0;
	/* Initialize the second two-digit number */
	/* Loop through all possible first numbers */
	while (first_number < 100)
	{
		second_number = first_number + 1;
		/* Initialize the second number */
		/* Loop through all possible second numbers */
		while (second_number < 100)
		{
			/* Print the first two-digit number */
			putchar((first_number / 10) + '0');
			putchar((first_number % 10) + '0');
			/* Print the separator */
			putchar(' ');
			/* Print the second two-digit number */
			putchar((second_number / 10) + '0');
			putchar((second_number % 10) + '0');
			/* Print comma and space if not the last combination */
			if (first_number < 98)
			{
				putchar(',');
				putchar(' ');
			}
			second_number++;
			/* Move to the next second number */
		}
		first_number++;
		/* Move to the next first number */
	}
	putchar('\n');
	/* Print a newline character at the end */
	return (0);
	/* Return 0 to indicate success */
}
