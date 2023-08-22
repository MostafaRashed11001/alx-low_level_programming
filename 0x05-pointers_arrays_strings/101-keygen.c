#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Generates a password based on a specified sum.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum;
	int ch;

	srand(time(NULL));
	while (sum <= 2645)
	{
		ch = rand() % 128;
		sum += ch;
		putchar(ch);
	}
	putchar(2772 - sum);
	return (0);
}
