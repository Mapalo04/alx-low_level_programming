#include "main.h"


/**
 * print_rev - prints a string in revers followed by a new line.
 * @s: is of type char
 *
 */

void print_rev(char *s)
{
	int n = 0;
	int start;
	while (*s )
{
	n++;
	s++;
}
	s--;
	start = n;
	while (start > 0)
{
	
	_putchar(*s);
	s--;
	start--;
}
	_putchar('\n');
}
