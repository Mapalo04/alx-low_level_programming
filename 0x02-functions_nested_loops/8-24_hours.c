#include "main.h"

/**
 * jack_bauer - prints the time of the day.
 *
 * Return: 0 on success
 */

void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	while (hrs < 24)
{
		while (mins < 60)
{
			if (hrs < 10)
{
				_putchar('0');
				_putchar('0' + hrs);
}
			else if (hrs >= 10)
{
				_putchar('0' + (hrs / 10));
				_putchar('0' + (hrs % 10));
}
			putchar(':');
			if (mins < 10)
{
				_putchar('0');
				_putchar('0' + mins);
}
			else if (mins >= 10)
{
				_putchar('0' + mins / 10);
				_putchar('0' + mins % 10);
}
			_putchar('\n');
			mins++;
}
		_putchar('0' + hrs);
		_hrs++;
		mins = 0;
}
}
