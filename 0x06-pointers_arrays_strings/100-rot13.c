#include "main.h"

/**
 * rot13 - Encodes a string using the ROT13 cipher.
 * @s: The input string to be encoded.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_sub[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;

		while (alphabet[j] != '\0')
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13_sub[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
