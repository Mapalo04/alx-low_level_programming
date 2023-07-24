#include "main.h"


/**
 * rev_string - prints a string in revers followed by a new line.
 * @s: is of type char
 *
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
{
	count++;
}
	i = 0;
	while (i < count)
{
	count--;
	rev = s[i];
	s[i] = s[count];
	s[count] = rev;
	i++;
}
}
