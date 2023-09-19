#include "main.h"

/**
 * reverse_array - Reverses the elements of an integer array.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, j = 0, temp;

	for (i = n - 1, j = 0 ; i >= n / 2 && j <= n / 2; i--, j++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
	}
}
