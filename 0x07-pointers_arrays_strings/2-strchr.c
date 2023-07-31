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
	char a = ' ';

	while (a != c)
{
		if (*s == c)
			break;
		s++;
}
	return (s);
}
