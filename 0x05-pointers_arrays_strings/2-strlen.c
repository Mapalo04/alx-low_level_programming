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

	for (*s; *s != '\0'; *s++)
{
	a++;
}

	return(a);
}
