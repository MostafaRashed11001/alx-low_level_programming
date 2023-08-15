#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fib_count = 50, i = 0;
	unsigned long int fib1 = 1, fib2 = 2, next_fib;

	printf("%lu, %lu", fib1, fib2);
	for (i = 2; i < fib_count; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}
