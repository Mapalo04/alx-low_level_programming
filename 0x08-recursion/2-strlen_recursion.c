#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string to print
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		s++;
		i += _strlen_recursion(s);
	}
	return (i);
}
