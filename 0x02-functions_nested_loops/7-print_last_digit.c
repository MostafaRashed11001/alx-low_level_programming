#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to get the last digit from
 *
 * Return: The value of the last digit
 *
 * Description:
 * This function prints the last digit of
 * the given number and returns its value.
 *
 * It works for both positive and negative numbers.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	/* Get the remainder when divided by 10 */
	if (last_digit < 0)
	{
		last_digit = -last_digit;
		/* Ensure the last digit is positive */
	}
	_putchar(last_digit + '0');
	/* Print the last digit as a character */
	return (last_digit);
	/* Return the value of the last digit */
}
