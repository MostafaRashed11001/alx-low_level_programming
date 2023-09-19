#include "main.h"
#define NULL '\0'

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing accepted bytes.
 *
 * Description: This function searches the string @s for the first occurrence
 * of any byte from the string @accept. It returns a pointer to the byte in @s
 * that matches one of the bytes in @accept, or NULL if no such byte is found.
 *
 * Return: A pointer to the first matching byte in @s, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}

