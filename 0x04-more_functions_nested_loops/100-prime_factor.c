#include <stdio.h>
#include <math.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the largest prime factor of a given number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int max_prime = 0, i;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max_prime = n;
	}

	printf("%lu\n", max_prime);

	return (0);
}
