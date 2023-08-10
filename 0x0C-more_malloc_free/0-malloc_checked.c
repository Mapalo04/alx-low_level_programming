#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_unchecked - allocates memory
 * @b: the memory to allocate
 *
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
		exit (98);
	return (result);

}
