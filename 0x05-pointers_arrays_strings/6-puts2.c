#include "main.h"


/**
 * puts2 - prints a string followed by a new line.
 * @str: is of type char
 *
 */

void puts2(char *str)
{
	int count = 0;
	int t = 0;
	char *ptr = str;
	int o;

	while (*ptr != '\0')
{
	ptr++;
	count++;
}
	t = count - 1;
	o = 0;
	while (o <= t)
{
	if (o % 2 == 0)
{
	_putchar(str[o]);
}
	count++;
}
	_putchar('\n');
}
