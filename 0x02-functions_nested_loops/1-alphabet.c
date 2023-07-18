#include "main.h"

/**
 * print_alphabet - prints the alphabet.
 */

void print_alphabet(void)
{
	char lt = 'a';

	while (lt <= 'z')
{
		_putchar(lt);
		lt++;
}
	_putchar('\n');
}

