#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 */

void print_alphabet_x10(void)
{
	char lt = 'a';
	int num = 0;

	while (num < 10)
{
	while (lt <= 'z')
{
		_putchar(lt);
		lt++;
}
	_putchar('\n');
	num++;
	lt = 'a';
}
}
