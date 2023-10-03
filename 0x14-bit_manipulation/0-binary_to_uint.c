#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 *
 * @b: Pointer to the binary string to be converted.
 *
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, b_const = 1, uint_res = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			b_const *= 2;
		}
		else if (b[i] == '1')
		{
			uint_res += b_const;
			b_const *= 2;

		}
		else
		{
			return (0);
		}
	}
	return (uint_res);
}
