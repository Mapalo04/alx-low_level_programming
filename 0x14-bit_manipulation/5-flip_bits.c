#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits to flip in order to get to the next.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to flip in order to get to the next.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i; 
	unsigned int a;
	unsigned long int cur;
	unsigned long int xcur = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cur = xcur >> i;
		if (cur & i)
			a++;
	}
	return (a);
}
