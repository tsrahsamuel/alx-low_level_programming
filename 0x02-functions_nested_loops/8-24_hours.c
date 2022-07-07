#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * Return: void
 */
void jack_bauer(void)
{
		int hour, min;

		for (hour = 0; hour <= 23; hour++)
		{
			for (min = 0; min <= 59; min++)
			{
				print_num(hour);
				_putchar(':');
				print_num(min);
				_putchar('\n');
																				}
		}
}
