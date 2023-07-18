#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98.
 * @n: is int
 *
 * Return: 0 on success.
 */

void print_to_98(int a)
{
	while ( a <= 98 || a >= 98)
{
		printf("%d", a);
		if (a != 98)
{
			putchar(',');
			putchar(' ');
}
		if (a == 98)
{
			break;
}
		if (a < 98)
{
			a++;
}
		else if (a > 98)
{
			a--;
}
}
	putchar('\n');
}
