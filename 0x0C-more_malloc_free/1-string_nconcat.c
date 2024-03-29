#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len2 = 0, lent, i, x;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0' && s1; i++)
		len++;
	for (i = 0; s2[i] != '\0' && s2; i++)
		len2++;
	if (n < len2)
		str = malloc(sizeof(char) * (len + n + 1));
	else
		str = malloc(sizeof(char) * (len + len2 + 1));
	if (str == NULL)
		return (NULL);
	lent = len + len2;
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (x = 0; n < len2 && x < n; x++)
	{
		str[i] = s2[x];
		i++;
	}
	for (; n >= len2 && i < lent; i++)
		str[i] = s2[x++];
	str[i] = '\0';
	return (str);
}
