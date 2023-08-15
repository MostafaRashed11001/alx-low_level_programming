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
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times followed by new lines
 *
 * Description:
 * This function prints the lowercase alphabet from 'a' to 'z' ten times,
 * with each set followed by a newline character.
 */
void print_alphabet_x10(void);
/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 * Description:
 * This function checks whether the given character is lowercase or not.
 * It returns 1 if the character is lowercase ('a' to 'z'), and 0 otherwise.
 */
int _islower(int c);
/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 *
 * Description:
 * This function checks whether the given character is an alphabetic letter,
 * whether it's lowercase ('a' to 'z') or uppercase ('A' to 'Z').
 * It returns 1 if the character is an alphabetic letter, and 0 otherwise.
 */
int _isalpha(int c);
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
int print_sign(int n);
/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which to compute the absolute value
 *
 * Return: The absolute value of n
 *
 * Description:
 * This function computes the absolute value of the given integer.
 * If n is greater than or equal to zero, the function returns n.
 * If n is negative, the function returns -n.
 */
int _abs(int n);
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to get the last digit from
 *
 * Return: The value of the last digit
 *
 * Description:
 * This function prints the last digit of the given number and returns its value.
 * It works for both positive and negative numbers.
 */
int print_last_digit(int n);

#endif /* MAIN_H */
