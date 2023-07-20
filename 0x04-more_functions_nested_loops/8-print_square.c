#include "main.h"

/**
 * print_square - prints a square of size.
 * @size: is int
 *
 */


void print_square(int size)
{
	int num = 0;
	int lc = 0;

	if (size > 0)
{
	while (lc < size)
{
		while (num < size)
{
			_putchar('#');
			num++;
}
	_putchar('\n');
	lc++;
	num = 0;
}
}
	else
{
	_putchar('\n');
}
}
