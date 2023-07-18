#include "main.h"

/**
 * times_table - prints the times table.
 *
 * Return: 0 on success
 */
void times_table(void)
{
	int rows = 0;
	int clm = 0;

	while (rows < 10)
{
		while (clm < 10)
{
			int res = (rows * clm);

			if (res < 10)
{
				if (clm != 0)
{
				_putchar(' ');
}
				_putchar('0' + res);
}
			else if (res >= 10)
{
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
}
			if (clm != 9)
{
				_putchar(',');
				_putchar(' ');
}
			clm++;
}
		_putchar('\n');
		rows++;
		clm = 0;
}
}
