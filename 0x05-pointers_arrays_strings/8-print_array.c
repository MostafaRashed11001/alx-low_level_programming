#include <stdio.h>

/**
 * print_array - Prints an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");

	}
	printf("\n");

}
