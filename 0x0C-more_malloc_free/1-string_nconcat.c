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
	unsigned int len = 0, i, x;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;

	str = malloc(sizeof(char) * (len + 2));
	len = i;
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (x = 0; x <= n && x <= len; x++)
	{
		str[i] = s2[x];
		i++;
	}

	return (str);
}
