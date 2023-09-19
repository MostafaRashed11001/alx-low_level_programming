#include "main.h"

/**
 * _pow_recursion - Computes the value of a number raised to a power
 * using recursion.
 * @x: The base number.
 * @y: The exponent.
 *
 * Description:
 * This function recursively calculates value of @x raised to the power of @y.
 * If @y is negative, the function returns -1. If @y is 0, function returns 1.
 * Otherwise, the function returns @x times the result of @x raised to @y - 1.
 *
 * Return: The value of @x raised to the power of @y, or -1 if @y is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
