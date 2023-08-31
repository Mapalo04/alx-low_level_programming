#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the values of a bit at a given index.
 * @n: the value to get from
 * @index: the index at which the value is.
 *
 * Return: value at given index else -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
