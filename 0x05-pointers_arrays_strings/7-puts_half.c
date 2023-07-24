#include "main.h"


/**
 * puts_half - prints a string followed by a new line.
 * @str: is of type char
 *
 */

void puts_half(char *str)
{
	int c = 0;
	int b, count;

	count = 0;
	while (str[a] != '\0')
{
		count++;
		a++;
}
	b = (longi / 2);
	if ((count % 2) == 1)
{
		b = ((count + 1) / 2);
}
	for (c = b; str[a] != '\0'; c++)
{
		_putchar(str[a]);
}
	_putchar('\n');
}
