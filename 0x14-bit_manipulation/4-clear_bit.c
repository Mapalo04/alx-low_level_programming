#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets a bit at a given index to 0.
 * @n: the value to get from
 * @index: the index at which the value is.
 *
 * Return: 1 if it worked else -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ~(1UL << index) & *n;
	return (1);
}
