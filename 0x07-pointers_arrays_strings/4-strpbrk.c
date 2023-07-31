#include "main.h"

/**
 * _strpbrk - searches for a string of any set of bytes
 * @s: string to scan
 * @accept: string to refer to
 *
 * Return: number of strings
 */

char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s != '\0')
{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
}
	return ('\0');
}
