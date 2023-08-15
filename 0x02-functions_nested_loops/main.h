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

#endif /* MAIN_H */
