#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0-14
 *
 * Return: 0 if success
 */


void more_numbers(void)
{
	int num = 0;
	int lc = 0;

	while (lc < 10)
{
		while (num < 15)
{
			_putchar('0' + num);
			num++;
}
	_putchar('\n');
	lc++;
	num = 0;
}
	return (0);
}
