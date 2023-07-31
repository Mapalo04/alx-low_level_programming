#include "main.h"

/**
 * _memcpy - copies src bytes to dest
 * @dest: copying to
 * @src: copying from
 * @n: number of bytes to replace
 *
 * Return: the updated memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
