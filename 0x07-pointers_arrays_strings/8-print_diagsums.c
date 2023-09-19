#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 *
 * Description: This function calculates the sum of both diagonals of the
 * square matrix @a and prints the results using the _putchar function.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, fdiagonal = 0, sdiagonal = 0;

	for (; i < size; i++)
	{
		fdiagonal += a[i * size + i];
		sdiagonal += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", fdiagonal, sdiagonal);
}
