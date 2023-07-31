#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to work on
 * @b: char parameter to replace the memory with
 * @n: number to replace
 *
 * Returns: the updated memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; 0 < n; a++)
	{
		s[a] = b;
		n--;
	}
}
