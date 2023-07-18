#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: is int
 *
 * Return: 1 if alpha else 0
 */

int print_sign(int n)
{
	if (n > 0)
{
		_putchar('+');
		return (1);
}
	else if (n == 0)
{
		_putchar('0');
		return (0);
}
	else if (n < 0)
{
		_putchar('-');
		return (-1);
}
	return (0);
}
