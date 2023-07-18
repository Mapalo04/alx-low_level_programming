#include "main.h"

/**
 * print_times_table - prints the times table n.
 * @n: is int
 *
 * Return: 0 on success
 */
void print_times_table(int n)
{
	int rows, clm, res;

	if ((n <= 15) && (n >= 0))
{
	for (rows = 0; rows <= n; rows++)
{
		for (clm = 0; clm <= n; clm++)
{
			res = (rows * clm);
			if (res < 10)
{
				if (clm != 0)
{
				_putchar(' ');
				_putchar(' ');
}
				_putchar('0' + res);
}
			else if ((res >= 10) && (res < 100))
{
				_putchar(' ');
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
}
			else if (res >= 100)
{
				_putchar('0' + ((res / 10) / 10));
				_putchar('0' + ((res / 10) % 10));
				_putchar('0' + (res % 10));
}
			if (clm != n)
{
				_putchar(',');
				_putchar(' ');
}
}
		_putchar('\n');
}
}
}
