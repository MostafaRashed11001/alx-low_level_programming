#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description:
 * This function prints every minute of the day of Jack Bauer,
 * starting from 00:00 (midnight) to 23:59 (just before midnight).
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar((hours / 10) + '0');
			/* Print tens digit of hours */
			_putchar((hours % 10) + '0');
			/* Print ones digit of hours */
			_putchar(':');
			/* Print colon separator */
			_putchar((minutes / 10) + '0');
			/* Print tens digit of minutes */
			_putchar((minutes % 10) + '0');
			/* Print ones digit of minutes */
			_putchar('\n');
			/* Print newline character */
		}
	}
}
