#include "main.h"

/**
 * _strlen_recursion - Computes the length of a string using recursion.
 * @s: Pointer to the string.
 *
 * Description:
 * This function recursively computes the length of the string @s by counting
 * the characters until the null terminator is encountered.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
