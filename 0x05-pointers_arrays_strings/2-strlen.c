#include "main.h"

/**
 * int _strlen - returns the length of a string
 * @s: is a pointer
 *
 * Returns - length of a string.
 */

int _strlen(char *s)
{
	int a;

	while (*s != '\0')
{
	a++;
	*s++;
}

	return(a);
}
