#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string to locate on
 * @c: the character to locate
 *
 * Return: a new string
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
{
		if (*s == c)
			return (s);
		s++;
}
	return (0);
}
