#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array containing the command-line arguments, where argv[0]
 *        is the name of the program, and subsequent elements are arguments.
 *
 * Description:
 *
 *   command line, representing the amount in cents, and computes the minimum
 *   number of coins (quarters, dimes, nickels, and pennies) needed to make up
 *   that amount. The program then prints the minimum number of coins required.
 *
 * Return:
 *   - 0 for successful execution.
 *   - 1 when an error occurs, such as incorrect usage or invalid input.
 */

int main(int argc, char *argv[])
{
	if (!(argc == 2))
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
			printf("%d\n", 0);
		else
		{
			int coins[5] = {25, 10, 5, 2, 1};
			int i = 0;
			int diff = atoi(argv[1]);
			int counter = 0;

			while (diff != 0)
			{
				if (diff < coins[i])
				{
					i++;
				}
				else
				{
					diff -= coins[i];
					counter++;
				}

			}
			printf("%d\n", counter);
		}
	}
	return (0);
}
