#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 and prints + if n is greater than zero,
 *         0 and prints 0 if n is zero,
 *        -1 and prints - if n is less than zero
 *
 * Description:
 * This function prints the sign of the given number.
 * It returns 1 and prints '+' if the number is greater than zero,
 * returns 0 and prints '0' if the number is zero,
 * and returns -1 and prints '-' if the number is less than zero.
 */
int print_sign(int n)
{
	int x = 0;

	if (n > 0)
	{
		x = _putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		x = _putchar('0');
		return (0);
	}
	else
	{
		x = _putchar('-');
		return (-1);
	}
}
