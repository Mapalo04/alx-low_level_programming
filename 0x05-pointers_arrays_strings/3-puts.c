#include "main.h"


/**
 * _puts - prints a string followed by a new line.
 * @str: is of type char
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
{
	_putchar(*str++);
}
	_putchar('\n');
}
