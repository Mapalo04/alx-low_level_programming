#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98.
 * @n: is int
 *
 * Return: 0 on success.
 */

void print_to_98(int n)
{
	while (n <= 98)
{
		if (n < 10)
{
			_putchar('0' + n);
}
		else if (n >= 10)
{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
}
		if (n != 98)
{
			_putchar(',');
			_putchar(' ');
}
		n++;
}
