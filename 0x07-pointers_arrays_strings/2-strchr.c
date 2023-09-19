#include "main.h"
#define NULL '\0'
/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to be located.
 *
 * Description: This function searches for the first occurrence of the char
 * @c in the string @s. If the character is found, the function returns pointer
 * to the first occurrence of @c in @s; otherwise, it returns NULL.
 *
 * Return: A pointer to the first occurrence of @c in @s,
 * or NULL if @c is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0, flag = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
		return (s + i);
	else
		return (NULL);
}
