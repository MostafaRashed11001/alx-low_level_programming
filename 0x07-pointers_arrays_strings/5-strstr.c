#include "main.h"
#define NULL '\0'

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Description: This function searches the string @haystack for the first
 * occurrence of the substring @needle. The terminating null bytes ('\0')
 * are not compared. It returns a pointer to the beginning of the located
 * substring in @haystack, or NULL if the substring is not found.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}

