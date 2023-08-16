#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - prints a name
 * @array: the array
 * @size: size of the array
 * @cmp: is a pointer to the comparing function
 *
 * Return: an integer
 */



int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
