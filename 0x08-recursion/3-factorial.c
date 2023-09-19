#include "main.h"

/**
 * factorial - Computes the factorial of a given integer.
 * @n: The integer for which factorial is computed.
 *
 * Description:
 * This function recursively calculates the factorial of the integer @n. If @n
 * is negative, the function returns -1. If @n is 0, the function returns 1.
 * Otherwise, the function returns @n times the factorial of @n - 1.
 *
 * Return: The factorial of @n, or -1 if @n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
