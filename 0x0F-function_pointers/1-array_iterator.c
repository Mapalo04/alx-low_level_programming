#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a given function on each parameter
 * @array: the array to work on
 * @size: size of the array
 * @action: the function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
