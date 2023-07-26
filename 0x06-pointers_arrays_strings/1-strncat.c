#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: holds result
 * @src: string to concatenate to
 * @n: the bytes to use from src
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0' && len2 < n)
{
		dest[len1] = src[len2];
		len1++;
		len2++;
}
	dest[len1] = '\0';
	return (dest);
}
