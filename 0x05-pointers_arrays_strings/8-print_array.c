#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: is of type int
 * @n: is of type int
 *
 */

void print_array(int *a, int n)
{
	int c = 0;

	while (c < (n - 1))
{
		printf("%d, ", a[c]);
		c++;
}
		if (c == (n - 1))
{
			printf("%d", a[n - 1]);
}
	_putchar('\n');
}
}
