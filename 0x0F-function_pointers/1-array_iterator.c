#include "function_pointers.h"

/**
 * array_iterator - Applies a given function to each element of an array.
 * @array: The integer array to iterate over.
 * @size: The number of elements in the array.
 * @action: A pointer to the function to be applied to each element.
 *
 * This function iterates over the elements of the integer array 'array'
 * and applies the provided 'action' function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action && size)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
