#include "main.h"

/**
 * *_strcpy - copies the string pointed to by
 * @dest: copying to
 * @src: copying from
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
{
		a++;
}
	while (b < 1)
{
		dest[b] = src[b];
		b++;
}
	dest[a] = '\0';
	return (dest);
}
