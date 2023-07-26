#include "main.h"

/**
 * string_toupper- changes lower case to uppercase
 * @a: pointer
 *
 * Return: uppercase
 */

char *string_toupper(char *a)
{
	int len1;

	len1 = 0;
	while (a[len1] != '\0')
{
		if (a[len1] >= 'a' && a[len1] <= 'z')
			a[len1] = a[len1] - 32;
		len1++;
}
	return (a);
}
