#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * using a custom comparison function.
 * @array: The integer array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function.
 *
 * Return: The index of the first element
 * for which the comparison function returns true.
 * If no element matches or if size is zero or negative, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, index = -1;

	if (array && cmp && size > 0)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]))
			{
				index = i;
				break;
			}

		}
	}
	return (index);
}
