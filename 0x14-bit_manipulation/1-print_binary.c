#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary form of a decimal
 * @n: the decimal number to convert.
 *
 */

void print_binary(unsigned long int n)
{
	int i, a = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = n >> i;

		if (new & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}
