#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the lowest number
 * @max: the highest number
 *
 * Return: an array of integers
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(min) * (max - min + 1));
	if (arr == NULL)
		return (NULL);

	for (; min <= max; min++)
	{
		arr[i] = min;
		i++;
	}
	return (arr);

}
