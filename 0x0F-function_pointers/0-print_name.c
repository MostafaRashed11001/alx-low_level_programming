#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function.
 * @name: The name to be printed.
 * @f: A function pointer to the printing function.
 *
 * This function takes a name and a function pointer to a function that
 * can print the name. It calls the specified function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
