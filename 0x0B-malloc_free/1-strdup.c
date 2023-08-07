#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup  - duplicates a string
 * @str: string to be duplicated
 *
 * Return: a pointer if succes and null if it fails
 */

char *_strdup(char *str)
{
	char *dstr;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	dstr = malloc(sizeof(char) * (len + 1));
	if (dstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		dstr[i] = str[i];
	return (dstr);

}
