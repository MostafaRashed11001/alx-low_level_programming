#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char message[] = "_putchar\n";
	int i = 0;

	for (i = 0; message[i] != '\0'; i++)
	{
		_putchar(message[i]);
		/* Print each character in the message */
	}
	return (0);
}
