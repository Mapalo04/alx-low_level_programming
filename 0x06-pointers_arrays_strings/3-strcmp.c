#include "main.h"

/**
 * _strcmp - compares string 1 and 2
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int len1;

	len1 = 0;
	while (s1[len1] != '\0' && s2[len1] != '\0')
{
		if (s1[len1] != s2[len1])
			return (s1[len1] - s2[len1]);
		len1++;
}
	return (0);
}
