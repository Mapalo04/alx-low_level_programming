#include "main.h"

/**
 * print_number - prints integers
 * @n: is int
 *
 * Return: 0 if success
 */

void print_number(int n)
{
	int a = n;

	if (n < 0)
{
		_putchar('-');
		a = a * -1;
}
	if (a / 10)
{
		print_number(a / 10);
}
	_putchar((a % 10) + '0');
}
