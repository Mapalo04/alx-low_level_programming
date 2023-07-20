#include "main.h"

/**
 * print_line - prints a start line
 * @n: is int
 *
 */


void print_line(int n)
{
	int lc;

	if (n > 0)
{
	for (lc = 0; lc < n; lc++)
{
	_putchar('_');
}
}
	_putchar('\n');
}
