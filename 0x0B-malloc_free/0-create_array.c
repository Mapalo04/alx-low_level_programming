#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with 
 * a specific character.
 * @size: size of the array
 * @c: char to fill with
 *
 * Return: a pointer if succes and null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * size);
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
	}
	free(str);
	else 
		return (NULL);
}
