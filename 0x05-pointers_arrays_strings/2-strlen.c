#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: is a pointer
 *
 * Returns - length of a string.
 */

int _strlen(char *s)
{
	int n;

	while (*s != '\0')
{
	n++;
	s++;
}

	return(n);
}
