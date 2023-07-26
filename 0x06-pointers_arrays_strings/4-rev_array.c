#include "main.h"

/**
 * reverse_array - reverse content of an array.
 * @a: array
 * @n: number of elements
 *
 * Return: reversed array
 */

int reverse_array(int *a, int n)
{
	int b;
	int c;

	b = 0;
	while (b < n--)
{
		t = a[b];
		a[b] = a[n];
		a[n] = t;
		b++;
}
	return (a);
}
