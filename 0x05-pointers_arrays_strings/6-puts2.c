#include "main.h"


/**
 * puts2 - prints a string followed by a new line.
 * @str: is of type char
 *
 */

void puts2(char *str)
{
	int count = 0;

	while (*str != '\0')
{
	if (count % 2 == 0)
{
	_putchar(*str++);
}
}
	_putchar('\n');
}
