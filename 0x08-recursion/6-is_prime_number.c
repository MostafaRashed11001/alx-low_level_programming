#include "main.h"

/**
 * is_prime_recursive - Helper function for prime number checking.
 * @n: The number to be checked.
 * @divisor: The current divisor being checked.
 *
 * Description:
 * This recursive function checks if the given number @n is divisible by any
 * number in the range [2, @divisor]. If @divisor reaches 1, the function
 * returns 1 (indicating that @n is prime). If @n is divisible by any number,
 * the function returns 0 (indicating that @n is not prime).
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Description:
 * This function checks if the given number @n is a prime number.
 *
 * Return: 1 if @n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_recursive(n, n - 1));
}
