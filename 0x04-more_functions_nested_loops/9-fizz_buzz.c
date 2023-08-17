#include <stdio.h>
/* Include the standard I/O library */
int main(void)
{
	int i;
	/* Declare the loop counter */
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
			/* Print "FizzBuzz" */
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			/* Print "Fizz" */
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			/* Print "Buzz" */
		}
		else
		{
			printf("%d ", i);
			/* Print the number itself */
		}
	}
	printf("\n");
	/* Print a newline character to move to the next line */
	return (0);
	/* Return 0 to indicate successful execution */
}
