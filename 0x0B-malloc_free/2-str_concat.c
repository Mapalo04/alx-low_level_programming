#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strngs
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer if succes and null if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i;
	unsigned int len1 = 0, len2 = 0, lent = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	lent = i;
	for (i = 0; i < len2; i++)
	{
		str[lent] = s2[i];
		lent++;
	}
	return (str);

}
