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

#endif /* MAIN_H */
