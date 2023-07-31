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
	int a = 0;

	while (s[a] != '\0')
{
		if (s[a] == c)
			return (&s[a]);
		a++;
}
	return (0);
}
