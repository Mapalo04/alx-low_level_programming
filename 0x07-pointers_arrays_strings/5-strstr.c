#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to scan
 * @needle: string to refer to
 *
 * Return: number of strings
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
}
	return (0);
}
