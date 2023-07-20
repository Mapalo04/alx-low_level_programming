#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0-14
 *
 */


void more_numbers(void)
{
	int num = 0;
	int lc = 0;

	while (lc < 10)
{
		while (num < 15)
{
			if  (num > 10)
{
				_putchar('0' + (num / 10));
}
			_putchar('0' + (num % 10));
			num++;
}
	_putchar('\n');
	lc++;
	num = 0;
}
}
