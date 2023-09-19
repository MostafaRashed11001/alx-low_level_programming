#include "main.h"

/**
 * infinite_add - Adds two positive numbers represented as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the result buffer.
 *
 * Return: Pointer to the result buffer 'r' or 0 if result can't be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, i, j, k, num1, num2, sum;
	char temp;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}
	if (len1 + 1 >= size_r || len2 + 1 >= size_r)
	{
		return (0);
	}
	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		i--;
		j--;
		k++;
	}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
