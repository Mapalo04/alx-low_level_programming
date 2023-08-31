#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary number to convert
 *
 * Return: the converted number else 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if ((b[i] < '0') || (b[i] > '1'))
			return (0);
		a = 2*a + (b[i] - '0');
	}
	return (a);
}
