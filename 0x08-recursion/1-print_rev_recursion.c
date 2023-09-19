#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description:
 * This function recursively prints each character of the string @s in reverse
 * order, starting from the last character and moving backwards until the
 * null terminator is encountered.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
