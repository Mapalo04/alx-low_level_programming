#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int r;
	int f = 0;
	int s = 0;

	for (r = 0; r < size; r++)
	{
		f = f + a[r * size + r];
	}
	for (r = size - 1; r >= 0; r--)
	{
		s = s + a[r * size + (size - r - 1)];
	}
	printf("%d, %d\n", f, s);
}
