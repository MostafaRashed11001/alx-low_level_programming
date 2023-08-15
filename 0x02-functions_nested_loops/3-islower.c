/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 *
 * Description:
 * This function checks whether the given character is lowercase or not.
 * It returns 1 if the character is lowercase ('a' to 'z'), and 0 otherwise.
 */
int _islower(int c)
{
	/* Check if the character is within the lowercase range */
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		/* Character is lowercase */
	}
	else
	{
		return (0);
		/* Character is not lowercase */
	}
}
