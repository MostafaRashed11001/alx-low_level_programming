#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: 2D array representing the chessboard.
 *
 * Description: This function prints the contents of the 2D array @a, which
 * represents a chessboard. The chessboard consists of an 8x8 grid with
 * alternating spaces and characters. Each row is separated by a newline.
 *
 * Return: void (no return value)
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (; i < 8; i++)
	{
		for (; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		j = 0;
		_putchar('\n');
	}
}
