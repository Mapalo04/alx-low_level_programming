#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: the string to print
 *
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
		return;
	}
	else
		_putchar('\n');
}
