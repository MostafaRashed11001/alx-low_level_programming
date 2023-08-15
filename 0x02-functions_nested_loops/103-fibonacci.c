#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the sum of even-valued
 * terms in the Fibonacci sequence.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next_fib, even_sum = 0;
	/* Calculate even-valued Fibonacci terms up to 4,000,000 */
	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			even_sum += fib2;
		}
		next_fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = next_fib;
	}
	/* Print the sum of even-valued terms */
	printf("%lu\n", even_sum);
	return (0);
}
