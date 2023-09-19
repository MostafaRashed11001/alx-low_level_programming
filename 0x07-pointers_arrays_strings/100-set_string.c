#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the string pointer to be set.
 * @to: Pointer to the string to be assigned.
 *
 * Description: This function updates the value of the pointer @s to point to
 * the memory location of the string @to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
