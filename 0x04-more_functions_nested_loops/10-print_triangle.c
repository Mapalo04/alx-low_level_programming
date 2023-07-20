#include "main.h"

/**
 * print_triangle - prints a triangle of size.
 * @size: is int
 *
 */


void print_triangle(int size)
{
	int num, lc, max_s;

	if (size > 0)
{
	for (lc = 1; lc <= size; lc++)
{
		max_s = lc;
		for (num = 0; num < (size - max_s); num++)
{
			_putchar(' ');
}
		for (num = 0; num < lc; num++)
{
			_putchar('#');
}
		_putchar('\n');
}
}
	else
{
	_putchar('\n');
}
}
