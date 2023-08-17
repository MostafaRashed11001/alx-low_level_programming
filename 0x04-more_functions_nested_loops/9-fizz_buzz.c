#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100, replacing multiples of 3 with
 * "Fizz", multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			/* Print "FizzBuzz" */
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			/* Print "Fizz" */
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			/* Print "Buzz" */
		}
		else
		{
			printf("%d ", i);
			/* Print the number itself */
		}
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	/* Print a newline character to move to the next line */
	return (0);
	/* Return 0 to indicate successful execution */
}
