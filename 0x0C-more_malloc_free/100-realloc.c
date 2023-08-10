#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 * @ptr: old memory
 * @old_size: size of the old_memory
 * @new_size: size of the new memory
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *nptr, *optr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	nptr = malloc(new_size);
	if (nptr == NULL)
		return (NULL);
	optr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			nptr[i] = optr[i];
	}
	free(ptr);
	return (nptr);
}
