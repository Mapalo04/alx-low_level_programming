#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: copying to
 * @src: copying from
 * @n: the bytes to use from src
 *
 * Return: new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len1;

	len1 = 0;
	while (len1 < n && src[len1] != '\0')
{
		dest[len1] = src[len1];
		len1++;
}
	while (len1 < n)
{
		dest[len1] = '\0';
		len1++;
}
	return (dest);
}
