#include "main.h"

/**
 * print_diagonal - prints a diagonal line.
 * @n: is int
 *
 * Return: 0 if success
 */


void print_diagonal(int n)
{
	int lc, max_c, lcs;

	if (n > 0)
{
	for (lc = 0; lc < n; lc++)
{
		max_c = lc;
		for (lcs = 0; lcs < max_c; lcs++)
{
			_putchar(' ');
}
		_putchar('\\');
		_putchar('\n');
}
}
	return (0);
}
