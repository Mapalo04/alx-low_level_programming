#include "main.h"

/**
 * get_endianness - checks the endianess
 *
 * Return: 0 if big else 1 if little.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
