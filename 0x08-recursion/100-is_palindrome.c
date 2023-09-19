#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Helper function to recursively check palindrome.
 * @s: The string to be checked.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Description:
 * This recursive function checks if the substring of @s from @start to @end is
 * a palindrome by comparing characters at both ends. If they match, it
 * continues checking the inner substring until the start and end meet or
 * cross.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Description:
 * This function checks if the given string @s is a palindrome, meaning it
 * reads the same forwards and backwards.
 *
 * Return: 1 if @s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}

