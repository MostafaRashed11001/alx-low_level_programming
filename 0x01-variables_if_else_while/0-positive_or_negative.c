#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program generates a random number, checks its sign,
 * and prints a corresponding message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator with the current time */
	srand(time(0));
	/* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
	n = rand() - RAND_MAX / 2;
	/* Check the sign of the generated number and print a message */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("0 is zero\n");
	}
	return (0);
}
