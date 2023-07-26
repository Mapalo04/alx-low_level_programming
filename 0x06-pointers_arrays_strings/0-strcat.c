#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: holds result
 * @src: string to concatenate to
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0; 
	int len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	dest[len1] = ' ';
	while (src[len2] != '\0')
{
		len1++;
		dest[len1] = src[len2];
		len2++;
}
	dest[len1] = '\0';
	return (dest);
}
