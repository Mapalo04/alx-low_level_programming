#include "main.h"

/**
 * _strspn - checks for the number of characters present ins from accept
 * @s: string to scan
 * @accept: string to refer to
 *
 * Return: number of strings
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s != '\0')
{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
}
	return (a);
}
