/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 *
 * Description:
 * This function checks whether the given character is an alphabetic letter,
 * whether it's lowercase ('a' to 'z') or uppercase ('A' to 'Z').
 * It returns 1 if the character is an alphabetic letter, and 0 otherwise.
 */
int _isalpha(int c)
{
	/* Check if the character is a letter, either lowercase or uppercase */
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
		/* Character is an alphabetic letter */
	}
	else
	{
		return (0);
		/* Character is not an alphabetic letter */
	}
}
