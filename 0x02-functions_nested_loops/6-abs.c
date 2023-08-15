/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer for which to compute the absolute value
 *
 * Return: The absolute value of n
 *
 * Description:
 * This function computes the absolute value of the given integer.
 * If n is greater than or equal to zero, the function returns n.
 * If n is negative, the function returns -n.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
		/* Return the integer itself if it's non-negative */
	}
	else
	{
		return (-n);
		/* Return the negative of the integer if it's negative */
	}
}
