#include "main.h"

/**
 * reverse_array - reverse content of an array.
 * @a: array
 * @n: number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	b = 0;
	while (b < n--)
{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
		b++;
}
}
