#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long fib1 = 1, fib2 = 2, next_fib, i;
	/* Print the first two Fibonacci numbers */
	printf("%llu, %llu", fib1, fib2);
	for (i = 2; i < 98; i++)
	{
		next_fib = fib1 + fib2;
		printf(", %llu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");
	return (0);
}
