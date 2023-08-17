#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * _isupper - Check if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - Check if a character is digit
 * @c: The character to be checked
 *
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - Multiply two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - Print numbers from 0 to 9 followed by a new line
 */
void print_numbers(void);

#endif /* MAIN_H */
