#include "main.h"

/**
 * _sqrt_recursive_helper - Helper function for _sqrt_recursion.
 * @n: The number to calculate the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of @n, or -1
 * if @n does not have a natural square root.
 */
int _sqrt_recursive_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_recursive_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculates natural square root of number using recursion.
 * @n: The number to calculate the square root of.
 *
 * Description:
 * This function recursively calculates the natural square root of number @n.
 * If @n does not have a natural square root, the function returns -1.
 *
 * Return: The natural square root of @n, or 1
 * if @n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursive_helper(n, 1));
}
